//Goal: Determine if a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Enter an integer:\n";
    cin >> num;

    //if (num % 2 == 0)
    if ( num % 2 != 1) cout << "Even.";
    else cout << "Odd.";

    cout << endl << endl << endl;
    return 0;
}
