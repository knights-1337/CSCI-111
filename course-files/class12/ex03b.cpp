#include <iostream>
using namespace std;

double diffSquares(int a, double b) {
    double result = (a * a) - (b * b);
    return result;
}

int main() {
    int a = 5;
    double b = 3.5;
    double ans = diffSquares(a, b);
    cout << "Ans = " << ans << endl;
    return 0;
}
