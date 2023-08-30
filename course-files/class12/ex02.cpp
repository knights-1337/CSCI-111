#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << endl;
}

int main() {
    string name;
    for (int i = 1; i < 3; i++){
        cout << "Give me your name: ";
        cin >> name;
        greet(name);
    }
    return 0;
}
