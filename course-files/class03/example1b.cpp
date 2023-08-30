#include <iostream>
using namespace std;

int main() {
    //Goal: Figure the age in seconds
    int age, ageInSeconds;
    cout << "Please enter your age as a whole number: ";
    cin >> age;
    ageInSeconds = age * 365 * 24 * 60 * 60;
    cout << "You are " << ageInSeconds << " seconds old.\n";
    //Calculate the age in 5 years and print out the result
    age = age + 5;
    ageInSeconds = age * 365 * 24 * 60 * 60;
    cout << "In 5 years, you are " << ageInSeconds << " seconds old.\n";

    return 0;
}
