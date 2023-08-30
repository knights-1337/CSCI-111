#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an even number: ";
    cin >> num;

    if (num % 2 == 1) {
        cout << "Try again: ";
        cin >> num;
    }

    cout << "Thank you!" << endl;
    return 0;
}
