#include <iostream>
using namespace std;

int main() {
    string firstname, lastname;
    cout << "Enter your first and last name separated by a space: ";
    // cin >> firstname, lastname; //No good
    cin >> firstname >> lastname;
    cout << "Hello, " << firstname << " " << lastname << "\n";
    return 0;
}
