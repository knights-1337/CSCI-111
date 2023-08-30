#include <iostream>
using namespace std;

int maxElement(int x[], int cap){
  int max = x[0];
  for(int i = 1; i < cap; i++){
    if(max < x[i]) max = x[i];
  }
  return max;
}

int main() {
  int data[5] = {3, 1, 4, 1, 5};
  int ans = maxElement(data, 5);
  cout << ans << endl;
  return 0;
}
