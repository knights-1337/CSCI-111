#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //Goal: Print an X of *s
    for (int row = 1; row <= n; row++) { //outer for loop for the row
        for (int col = 1; col <= n; col++) { //inner for loop for the column
            if (row == col || row + col == n + 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
