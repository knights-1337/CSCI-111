#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a number that is divisible by 5: ";
    cin >> num;

    while ( num % 5 != 0 ){
        cout << "Incorrect. Please enter a number that is divisible by 5: ";
        cin >> num;
    }

    cout << "You have entered " << num << ".\n";
    return 0;
}
