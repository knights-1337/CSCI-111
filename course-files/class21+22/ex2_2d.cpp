#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void fillArray(int x[][5], int row, int col){
  srand(time(0));
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        x[i][j] = rand() % 100 + 1;
      }
  } 
}

void printArray(int x[][5], int row, int col){
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout << x[i][j] << "\t";
    }
    cout << endl;
  } 
}

int maxElement2D(int x[][5], int row, int col){
  int max = x[0][0];
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      if(max < x[i][j]) max = x[i][j];
    }
  }
  return max;
}

int main() {
  int data[5][5];
  fillArray(data, 5, 5);
  printArray(data, 5, 5);
  int ans = maxElement2D(data, 5, 5);
  cout << "Largest element is " << ans << endl;
  return 0;
}
