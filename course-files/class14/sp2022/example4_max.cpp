#include <iostream>
using namespace std;

int max(int a,int b) {
    if (a > b) b = a;
    cout << "a = " << a << " b = " << b << endl;
    return b;
}

int main () {
    //Goal: compare 2 numbers/expressions and find out which one is bigger

    int a = 1;
    int b = 0;

    cout << max(3, 5) << endl;
    cout << max(a, b);
    cout << "main: a = " << a << " b = " << b << endl;
    cout << endl;
    return 0;
}
