#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void fillArray(int x[], int cap){
  srand(time(0));
  for(int i = 0; i < cap; i++){
    x[i] = rand() % 100 + 1;
  } 
}

void printArray(int x[], int cap){
  for(int i = 0; i < cap; i++){
    cout << x[i] << " ";
  }
  cout << endl;
}

bool allOdd(int x[], int cap){
  for(int i = 0; i < cap; i++){
    if(x[i] % 2 == 0) return false;
  } 
  return true;
}

int main() {
  int data[5];
  //int data2[5] = {1, 1, 1, 1, 1};
  fillArray(data, 5);
  printArray(data, 5);
  if(allOdd(data, 5)) cout << "All elements are odd.\n";
  else cout << "Not all elements are odd.\n";
  //if(allOdd(data2, 5)) cout << "All elements are odd.\n";
  //else cout << "Not all elements are odd.\n";
  return 0;
}
