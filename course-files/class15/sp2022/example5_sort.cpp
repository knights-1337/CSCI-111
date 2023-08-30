#include <iostream>
using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int &a, int &b) {
    if (a > b) mySwap(a, b);
}

int main() {
    int x = 5, y = 6;
    cout << "After sort(" << x << ", " << y << "): ";
    sort(x, y);
    cout << " x = " << x << " y = " << y << endl;
    x = 9;
    cout << "After sort(" << x << ", " << y << "): ";
    sort(x, y);
    cout << " x = " << x << " y = " << y << endl;
    cout << endl;

    return 0;
}
