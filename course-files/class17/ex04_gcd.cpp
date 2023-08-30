#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    int m, n;
    cout << "Please enter 2 integers: ";
    cin >> m >> n;
    cout << "The gcd is " << gcd(m, n) << endl;
    return 0;
}
