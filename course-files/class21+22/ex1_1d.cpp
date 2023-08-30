#include <iostream>
#include <cstdlib>
#include <ctime>
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

int main() {
    int nums[10];
    fillArray(nums, 10);
    printArray(nums, 10);
    return 0;
}
