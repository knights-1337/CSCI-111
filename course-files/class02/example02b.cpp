#include <iostream>
using namespace std;

int main() {
    //Goal: ask the user for the first name and the age
    string firstName;
    cout << "Please give me your first name.\n" << endl << endl;
    cin >> firstName;

    int age;
    cout << "Please give me your age as a whole number: " << endl;
    cin >> age;

    cout << "First name: " << firstName << endl;
    cout << "You have entered: " << age << endl;

    return 0;
}
