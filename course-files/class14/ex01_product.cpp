#include <iostream>
using namespace std;

int product(int a, int b){
    a = a * b;
    return a;
}
int main(){
    int x = 5, y = 6;
    cout << product(x, y) << endl;
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}
