//Written by Rebecca Schley
#include <iostream>
using namespace std;

int main() {
    int a[3][5] = {{1, 1, -5, 7, 3}, {3, 5, 6, -9, 3}, {2, -4, 7, 6, 8}};
    double average[3];
//    int maxSum = 0, row = 0;
    for(int r = 0; r < 3; r++){
        int sum = 0;
        for(int c = 0; c < 5; c++){
            sum += a[r][c]; //sum = sum + a[r][c];
        }
        average[r] = sum / 5.0;
    }
    cout << "The average value for each row is:" << endl;
    for(int r = 0; r < 3; r++){
        cout << "Row " << r << " average is " << average[r] << endl;
    }
    return 0;
} 
