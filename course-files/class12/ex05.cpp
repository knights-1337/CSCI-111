#include <iostream>
using namespace std;

bool areOdd(int a, int b) {
    if(a%2 == 1 && b%2 == 1) return true;
    return false;
}

int main() {
    int a, b;
    cout << "Enter 2 integers: ";
    cin >> a >> b;

    cout << areOdd(a, b) << endl;   
    //cout << boolalpha << areOdd(a, b) << endl;   
    return 0;
}
