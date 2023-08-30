#include <iostream>
using namespace std;

void countDown(int n) {
    if (n == 1) {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    countDown(n-1);
}

int main() {
    countDown(35);
    return 0;
}
