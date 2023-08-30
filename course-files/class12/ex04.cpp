#include <iostream>
using namespace std;

int cube(int n) {
    return n * n * n; //one liner
}

int main() {
    cout << "Cube of 3 = " << cube(3) << endl; 
    return 0;
}
