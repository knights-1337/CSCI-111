#include <iostream>
using namespace std;

int main() {

    //Ask the user to enter a positive integer.
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    //If the value is not legal, terminate the program.
    //Data validation
    if (n <= 0) {
        cout << "Wrong input. Goodbye!!" << endl;
        return 0;
    }

    //Print the output per requirement
    for (int r = 1; r <= n; r++){
        int sum = 0;
        for (int c = 1; c <= r; c++){
            cout << c << " ";
            sum = sum + c;
        }
        cout << "the sum is " << sum << endl;
    }
    return 0;
}
