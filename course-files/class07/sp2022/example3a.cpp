#include <iostream>
using namespace std;

int main() {
    //Goal: Print only the odd numbers within 1 to 100
    for(int i = 1; i < 100; i++)
        if (i%2 != 0)
            cout << i << endl;

    return 0;
}
