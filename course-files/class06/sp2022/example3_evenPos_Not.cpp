#include <iostream>
using namespace std;

int main()
{
    //Goal: Get an even positive number from the user's input
    
    int n;
    cout << "Please give me an integer that is an even positive number: ";
    cin >> n;
    
    while( !(n > 0 && n % 2 == 0) ) {
        cout << "Please enter again: ";
        cin >> n;
    }
    
    cout << "Thanks a lot for giving me: " << n << endl;
    
    return 0;
}

