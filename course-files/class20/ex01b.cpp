//Written by Rebecca Schley
#include <iostream>
using namespace std;

int main() {
    int a[3][5] = {{1, 1, -5, 7, 3}, {3, 5, 6, -9, 3}, {2, -4, 7, 6, 8}};
    int maxSum = 0, row = 0;
/*
    for(int c = 0; c < 5; c++){
        maxSum += a[0][c];
    }
*/
    for(int r = 0; r < 3; r++){
        int sum = 0;
        for(int c = 0; c < 5; c++){
            sum += a[r][c];
        }
        if(r == 0 || sum > maxSum){
            maxSum = sum;
            row = r;
        }
    }
    cout << "Max sum is " << maxSum << " in row " << row << endl;
    return 0;
} 
