#include <iostream>
using namespace std;

void printArray(int a[], int size){
    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
}

void bubbleSort(int a[], int size){
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            //Sort in descending order; swap function from algorithm library
            //Reference; https://www.cplusplus.com/articles/NhA0RXSz/
            if (a[j] < a[j+1]) swap(a[j], a[j+1]); //swap function is from the algorithm library
}

int main() {
    int arr[5] = {1, 2, 5, 4, 3};
    //int size = sizeof(arr) / sizeof(arr[0]);
    //cout << size << endl;
    //printArray(arr, size);
    printArray(arr, 5);
    bubbleSort(arr, 5);
    printArray(arr, 5);

    return 0;
}
