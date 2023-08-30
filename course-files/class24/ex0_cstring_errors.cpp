#include <iostream>
using namespace std;

int main() {
    //Contains errors
    char cs[5] = "Hello";
    char cs1[] = "Hello";
    char cs2[] = "World";
    char cs3[];
    cs2 = cs1;
    cout << cs1 + cs2 << endl;
    return 0;
}
