#include <iostream>
using namespace std;

int cube(int num){
    return num * num * num;
}

int main () {
    //Goal: Calculate 1^3 + 2^3 + 3^3 + 4^3

    cout << cube(1) + cube(2) + cube(3) + cube(4) << endl;
    return 0;
}
