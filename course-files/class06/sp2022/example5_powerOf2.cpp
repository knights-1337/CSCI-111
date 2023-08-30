#include <iostream>
using namespace std;

int main()
{
    cout << "Power of 2.\n";
    
    int power = 1, exponent = 0; //initialize counter
    
    while (exponent <= 20) {
        cout << exponent << " " << power << endl;
        power *= 2;
        
        exponent = exponent + 1;
    }
    return 0;
}