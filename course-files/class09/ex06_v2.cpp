#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //Goal: Print an X of *s
    for (int r = 1; r <= n; r++) { //outer for loop for the row
        for (int c = 1, s = 5; c <= n; c++, s--) { //inner for loop for the column
            if (r == c || r == s) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
