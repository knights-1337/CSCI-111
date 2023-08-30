#include <iostream>
using namespace std;

int main() {
    //Goal: Print a triangle of *s
    for (int row = 1; row <= 5; row++) { //outer for loop for the row
        for (int col = 5; col >= 1; col--) { //inner for loop for the column
            if (row >= col) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
