#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter and integer greater than 1: ";
    cin >> num;
    
    int possibleFactor = 2; //initialize
    
    while (possibleFactor < num) {
        if (num % possibleFactor == 0){
            cout << "Your number is not prime. It has a factor: " 
                 << possibleFactor << endl;
            return 0;
        }
        possibleFactor = possibleFactor + 1;
    }
    
    cout << "Your number is prime.\n";
    return 0;
}
