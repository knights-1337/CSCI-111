#include <iostream>
using namespace std;

int main() {
    int sum = 0, input;
    cout << "Please enter a value that is not 0." << endl;
    cout << "Please enter 0 to end the program and print out the sum of all numbers entered." << endl;
    cin >> input;
    
    while( input != 0 ) {
        sum = sum + input; //sum += input;
        cout << "Enter another non-zero integer: ";
        cin >> input;
    }
    cout << "The total is " << sum << endl;

    return 0;

}
