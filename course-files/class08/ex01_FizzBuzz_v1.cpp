#include <iostream>
using namespace std;

int main() {
    //Goal: Print integers from 1 to n using the rules for FizzBuzz

    int n;
    cout << "Enter a positive whole number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i%3 == 0 && i%5 == 0)
            cout << "FizzBuzz\n";
        else if (i%3 == 0)
            cout << "Fizz\n";
        else if (i%5 == 0)
            cout << "Buzz\n";
        else
            cout << i << endl;
    }

    return 0;
}
