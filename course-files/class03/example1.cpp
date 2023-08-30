#include <iostream>
using namespace std;

int main() {
    //Goal: Figure the age in seconds
    int age, ageInSeconds;
    age = 0;
    cout << "Please enter your age as a whole number: ";
    cin >> age;
    ageInSeconds = age * 365 * 24 * 60 * 60;
    cout << "You are " << ageInSeconds << " seconds old.\n";
    cout << "Have a nice day!!" << endl;

    return 0;
}
