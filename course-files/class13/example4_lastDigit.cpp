#include<iostream>
using namespace std;

int lastDigit(int n){
    return n % 10;
}

int main(){ 
    int n = 19836;
    cout << lastDigit(n) << endl;

    return 0; 
}
