#include <iostream>
using namespace std;

int smallFactor(int x) {
    int answer = 2;
    while (x % answer != 0) answer++;
    return answer;
}

bool isPrime(int n) {
    if (n == smallFactor(n)) return true;
    return false;
}

int main() {
    int n;
    cout << "Please enter a number greater than 1: " << endl;
    cin >> n;
    if (isPrime(n)) cout << n << " is prime.";
    else cout << n << " is not prime.";
    cout << endl;
    return 0;
}
