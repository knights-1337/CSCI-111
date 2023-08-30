#include <iostream>
using namespace std;

int main() {
    char ans1 = 'y', ans2 = 'y';
    while ( ans1 == 'y' && ans2 == 'y' ){
        cout << "Are you having fun in class? ";
        cin >> ans1;
        cout << "Are you lying right now? ";
        cin >> ans2;
    }
    if (ans1 != 'y') cout << "That's too bad.\n";
    if (ans2 != 'y') cout << "Truth hurts.\n";
    return 0;
}
