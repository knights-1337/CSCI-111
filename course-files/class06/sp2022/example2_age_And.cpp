#include <iostream>
using namespace std;

int main()
{
    double age;
    cout << "Please enter your age: ";
    cin >> age;
    
    if( !(age >= 0 && age <= 125) ){ //data validation
        cout << "Liar!" << endl;
        return 0;
    }
    
    cout << "Thank you. You age is " << age << ".\n";
    
    return 0;
}

