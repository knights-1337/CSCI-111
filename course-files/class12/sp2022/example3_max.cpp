#include <iostream>
using namespace std;

int max(int a,int b) {
    if (a < b) return b;
    else return a;
}

int main () {
    //Goal: compare 2 numbers/expressions and find out which one is bigger

    int a = 1 + 2 + 3 * 4 + 5;
    int b = 1 * 2 + 3 + 4 * 5;

    cout << max(3, 5) << endl;
    cout << max(a, b);
    cout << endl;
    return 0;
}
