#include <iostream>
using namespace std;

int main() {
    //Goal: Create a big X
    int n = 5;
    for (int r = 1, s = 5; r <= n; r++, s--) {
        for (int c = 1; c <= n; c++){
            if (r == c || s == c) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
