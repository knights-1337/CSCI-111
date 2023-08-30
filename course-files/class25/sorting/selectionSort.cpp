#include <iostream>
using namespace std;

// did before

void printArray(int a[], int cap) {
   for (int c = 0; c < cap; c++) cout << a[c];
   cout << endl;
}

void swapPositions(int a[], int x, int y) {
   int temp = a[x];
   a[x] = a[y];
   a[y] = temp;
}

int maxIndex(int x[], int cap) {
   int ans = 0;
   for (int c = 0; c < cap; c++) {
      if (x[c] > x[ans]) ans = c;
   }
   return ans;
}

// sort function:  selection sort
void sort(int a[], int count) {
   if (count <= 1) return;
   int pos = maxIndex(a, count);
   swapPositions(a, pos, count -1);
   sort(a, count -1);
}

// main task
int main() {
   int data[8] = {3,1,4,1,5,9,2,6};
   printArray(data, 8);
   sort(data, 8);
   printArray(data, 8);
   return 0;
}

