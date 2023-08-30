#include <iostream>
using namespace std;

int main() {
    //Goal: Print out the number each time by removing the last digit
    int n = 12345;

    while(n != 0){
        cout << n << endl;
        n = n / 10;
    }

    return 0;
}
