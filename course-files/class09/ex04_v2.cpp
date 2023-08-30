#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //Goal: Print a triangle of *s
    for (int row = 1; row <= n; row++) { //outer for loop for the row
        for (int col = 5; col >= 1; col--) { //inner for loop for the column
            if (row <= col) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
