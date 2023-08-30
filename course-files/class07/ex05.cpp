#include <iostream>
using namespace std;

int main() {
    int x, orig;
    cout << "Please enter a positive integer:\n";
    cin >> x;

    orig = x;

    int counter = 0;
    while (x > 0) {
        counter++;
        x = x / 10;
        //x % 10?
    }

    cout << "The number of digits in " << orig << " = " << counter << endl;

    return 0;
}
