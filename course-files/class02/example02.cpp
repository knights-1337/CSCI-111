#include <iostream>
using namespace std;

int main() {
    //Goal: get the user to give me the first name and age
    
    string firstName;
    cout << "Please give me your first name:" << endl;
    cin >> firstName;

    int age;
    cout << "Please give me your age as a whole number: ";
    cin >> age;

    cout << "Your first name is " << firstName << ".\n";
    cout << "Your age is " << age << ".\n";

    return 0;
}
