#include<iostream>
using namespace std;

int main(){
    int strikes = 0;
    int num, remainder;

    cout << "Enter an even number: ";
    cin >> num;
    //remainder = num % 2;

    while (strikes < 3) {
        remainder = num % 2;
        if (remainder == 0) break;
        strikes = strikes + 1; //strikes++;
        
        if (strikes == 3) {
            cout << "Please learn what an even number is.\n";
            return 0;
        }
        cout << "Try again: ";
        cin >> num;
    }

    cout << "Thank you!" << endl;
    return 0;
}
