#include <iostream>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return temp;
}

int main(){
    int x = 5, y = 3;
    cout << swap(x, y) << endl;
    cout << "x = " << x << "; y = " << y << endl;
    return 0;
}
