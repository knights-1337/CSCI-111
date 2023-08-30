#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int stars = 0;
    int rows = n + n - 1;
    for (int r = 1; r <= rows; r++) {
        if (r <= n) stars++;
        else stars--;
        for (int c = 1; c <= stars; c++) cout << "*";
        for (int c = stars + 1; c <= n; c++) cout << " ";
        cout << endl;
    }

    return 0;
}
