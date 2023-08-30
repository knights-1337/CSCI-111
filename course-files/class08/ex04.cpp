#include <iostream>
using namespace std;

int main() {
    //Goal: Print a 5 x 5 square of *s
    for (int row = 1; row <= 5; row++) { //outer for loop for the row
        for (int col = 1; col <= 5; col++) { //inner for loop for the column
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
