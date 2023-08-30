#include <iostream>
using namespace std;

int main() {
    //Goal: Create a big X
    int n = 5;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++){
            if (r == c || r + c == n + 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
