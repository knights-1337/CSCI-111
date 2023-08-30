#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if (n <= 1) return n;
    //recrusive case
    return fib(n - 2) + fib(n - 1);
}


int main() {
    int n = 7;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
  
    return 0;
}
