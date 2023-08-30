#include <iostream>
using namespace std;

int main() {
    double age;
    cout << "Please give me you age: ";
    cin >> age;

    if(age >= 200) {
        cout << "You are a liar!!!\n";
        cout << "Goodbye!\n";
    }
    else { 
        cout << "Your age is " << age << endl;
        cout << "Goodbye!\n";
    }      
    return 0;
}
