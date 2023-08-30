#include <iostream>
using namespace std;

int main() {
    for (int r = 1; r <= 8; r++){
        for (int c = 1; c <= 8; c++)
            if (r%2 == c%2) cout << "X";
            else cout << "O";
        cout << endl;
    }
    return 0;
}
