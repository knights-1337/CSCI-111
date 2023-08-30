#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 7;
    for (int i = 7; i >= 0; i--)
        cout << "fibonacci(" << i << ") is = " << fib(i) << endl;
    return 0;
}
