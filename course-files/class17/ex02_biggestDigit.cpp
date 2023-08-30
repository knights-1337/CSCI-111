#include <iostream>
using namespace std;

int biggestDigit(int n) {
    //base case
    if (n < 10) return n;
    //recursive case
    int temp = biggestDigit(n/10);
    if (n%10 > temp) return n%10;
    return temp;
}

int main() {

    cout << biggestDigit(17350) << endl; //7
    cout << biggestDigit(97256) << endl; //9
    cout << biggestDigit(612835) << endl;//8

    return 0;
}
