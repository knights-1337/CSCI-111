#include <iostream>
using namespace std;

int main() {
    double age;
    cout << "Please give me you age: ";
    cin >> age;

    if(age >= 200) { //Need to use {} if there are more than 1 statement inside the if code block
        cout << "You are a liar!!!\n";
        return 0;
    }

    cout << "Thank you for entering the data.\n";
    cout << "Your age is " << age << endl;
    return 0;
}
