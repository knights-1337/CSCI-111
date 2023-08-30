#include <iostream>
using namespace std;

void printAddress(int& a){
    cout << "a in printAddress contains " << a << endl;
    cout << "Memory location of a in printAddress is " << &a << endl;
}
int main(){
    int x = 5;
    cout << "x in main contains " << x << endl;
    cout << "Memory location of x in main is " << &x << endl;
    printAddress(x);
    return 0;
}
