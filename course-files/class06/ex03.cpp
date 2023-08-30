#include <iostream>
using namespace std;

int main() {
    int tries = 0, input;
    cout << "Please enter a number that is a multiple of 13: ";
    cin >> input;
    tries++;
    while( input%13 != 0 ) {
        if (tries >= 3) {
            cout << "You have entered too many attempts. Goodbye!" << endl;
        return 0;
        }
        cout << "Try again. I need a number that is a multiple of 13: ";
        cin >> input;
        tries++;
    }
    cout << "Success!\n";
    
    return 0;
}
