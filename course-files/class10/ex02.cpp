#include <iostream>
using namespace std;

int main() {
    int n = 6;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++){
            if ((r + c) % 2 == 0) cout << "X";
            //if (r % 2 == c % 2) cout << "X";
            else cout << "O";
        }
        cout << endl;
    }
    
    return 0;
}
