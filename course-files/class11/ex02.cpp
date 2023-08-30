#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n = 1;
    while( n > 0 ) {
        cout << "Please give me a positive number.\n";
        cout << "You end the program by entering a non-positive number.\n";
        cin >> n;

        if (n <= 0) return 0;

        cout << "The square root of " << n << " is " << sqrt(n) << endl;
         
    }

    return 0;
}
