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

int sumColumn(int x[][5], int row, int col, int index){
  int sum = 0;
  for(int i = 0; i < row; i++){
    sum += x[i][index];
  }
  return sum;
}

int main() {
  int data[5][5];
  fillArray(data, 5, 5);
  printArray(data, 5, 5);
  int colIndex = 1;
  int ans = sumColumn(data, 5, 5, colIndex);
  cout << "The sum of column " << colIndex << " is " << ans << ".\n";
  return 0;
}
