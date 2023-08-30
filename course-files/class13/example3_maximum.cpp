#include<iostream>
using namespace std;

int maximum(int a, int b){
    if (a >= b) return a;
    return b;
}

int main(){ 
    int x = 0, y = 1, z = 2; 
    x = maximum(x + z, y - x); // sets x as maximum value 
    cout << x << endl; 
    return 0; 
}
