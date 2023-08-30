#include <iostream>
using namespace std;

int main() {
    //Goal: Print out the number in reverse
    int n = 12345; //hard-coding

    while(n > 0){
        cout << n % 10;
        n = n / 10;
    }

    cout << endl;
    return 0;
}
