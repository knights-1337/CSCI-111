#include <iostream>
using namespace std;

int main() {
    int n = 6;
    for (int r = 1; r <=n; r++){
        for (int c = 1; c <= n; c++){
            cout << r * c << " ";
        }
        cout << endl;
    }
    return 0;
}
