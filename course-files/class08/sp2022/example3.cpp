#include <iostream>
using namespace std;

int main() {
    //Goal: Create a triangle of *s
    for (int r = 5; r > 0; r--) {
        for (int c = 1; c <= r; c++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
