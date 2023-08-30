#include <iostream>
using namespace std;

int diffSquares(int a, int b) {
    int result = (a * a) - (b * b);
    return result;
}

int main() {
    int a = 5, b = 3;
    int ans = diffSquares(a, b);
    cout << "Ans = " << ans << endl;
    return 0;
}
