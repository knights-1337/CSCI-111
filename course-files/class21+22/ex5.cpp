#include <iostream>
using namespace std;

void mySwap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void addNum(int a[], int cap, int n){
    for (int i = 0; i < cap; i++) a[i] += n;
}

void printArray(int a[], int size){
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout << "Before: " << arr[1] << " " << arr[3] << endl;
    mySwap(arr[1],arr[3]);
    cout << "After: " << arr[1] << " " << arr[3] << endl;

    addNum(arr, 5, 1);
    printArray(arr, 5);

    int b[7] = {1,2,3,4,5,6,7};
    addNum(b, 7, 2);
    printArray(b, 7);

    return 0;
}
