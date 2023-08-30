#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //Goal: Print a diagonal of *s
    for (int r = 1; r <= n; r++) { //outer for loop for the row
        for (int c = 1; c <= n; c++) { //inner for loop for the column
            if (r == c) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
