#include <iostream>
using namespace std;

int main() {
    //Goal: Print integers from 1 to n using the rules for FizzBuzz

    int n;
    cout << "Enter a positive whole number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i%3 == 0)
            cout << "Fizz";
        if (i%5 == 0)
            cout << "Buzz";
        if (i%3 != 0 && i%5 != 0) 
            cout << i;
        cout << endl;
    }

    return 0;
}
