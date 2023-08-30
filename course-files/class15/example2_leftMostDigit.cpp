#include <iostream>
using namespace std;

int leftMostDigit(int n){
    if (n < 10) return n;
    return leftMostDigit(n/10);
}

int main() {
    int num;
    cout << "Please give me a positive number: ";
    cin >> num;
    cout << "The leftmost digit for " << num << " = " << leftMostDigit(num) << endl;
    return 0;
}
