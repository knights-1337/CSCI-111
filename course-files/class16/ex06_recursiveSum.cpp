#include <iostream>
using namespace std;

int recursiveSum(int n) {
    if (n == 1) {
        return 1;
    }
    return recursiveSum(n-1) + n;
}

int main() {
    cout << recursiveSum(10) << endl;

    return 0;
}
