#include <iostream>
using namespace std;

int main() {
    int a[3][5] = {{1, 1, -5, 7, 3}, {3, 5, 6, -9, 3}, {2, -4, 7, 6, 8}};
    int maxSum = 0, maxCol = 0;
    for(int r = 0; r < 3; r++){
        maxSum += a[r][0];
    }
    for(int c = 1; c < 5; c++){
        int sum = 0;
        for(int r = 0; r < 3; r++){
            sum += a[r][c];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxCol = c;
        }
    }
    cout << "Max sum is " << maxSum << " in maxCol " << maxCol << endl;
    return 0;
} 
