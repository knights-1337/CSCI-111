#include <iostream>
using namespace std;

int main() {
    char ans = 'y';
    while ( ans == 'y'){
        cout << "Are you having fun in class? ";
        cin >> ans;
    }
    cout << "That's too bad.\n"; //Escape character
    return 0;
}
