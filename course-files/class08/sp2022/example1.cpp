#include <iostream>
using namespace std;

int main() {
    //Goal: Create a rectangle (7 x 5) of *s
    for (int r = 1; r <= 7; r++) {
        for (int c = 1; c <= 5; c++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
