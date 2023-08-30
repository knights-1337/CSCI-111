#include <iostream>
#include <cstdlib>
#include <ctime>
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
      cout << x[i][j] << " ";
    }
    cout << endl;
  } 
}

int main() {
  int nums[10][5];
  fillArray(nums, 10, 5);
  printArray(nums, 10, 5);
  return 0;
}
