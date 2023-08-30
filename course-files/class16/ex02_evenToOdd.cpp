#include <iostream>
using namespace std;

int evenToOdd(int n) {
    if (n < 10) {
        if (n%2 == 0) return n+1;
        return n;
    }
    return evenToOdd(n/10)*10 + evenToOdd(n%10);
}

int main() {
    int n = 71236;
    cout << "evenToOdd(" << n << ")  = " << evenToOdd(n) << endl;
    cout << "evenToOdd(" << 135 << ")  = " << evenToOdd(135) << endl;
    cout << "evenToOdd(" << 222 << ")  = " << evenToOdd(222) << endl;
    return 0;
}
