#include <iostream>
using namespace std;

int main() {
    int input = 0;
    cout << "Please give me a number between 100 and 999: ";
    cin >> input;
    
    while (input < 100 || input > 999) {
        cout << "Illegal value: Please try again: ";
        cin >> input;
    }
    cout << "Good job for entering a correct value! Goodbye..." << endl;
    return 0;
}
