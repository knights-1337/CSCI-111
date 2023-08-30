#include <iostream>
using namespace std;

void triangle(int n) {
    for (int r = n; r > 0; r--){
        for (int c = 1; c <= n; c++)
            if (c < r) cout << " ";
            else cout << "*";
        cout << endl;
    }
}

int main() {

    cout << "Please give me a positive integer: ";
    int n;
    cin >> n;

    triangle(n);

    return 0;
}
