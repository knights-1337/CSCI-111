#include <iostream>
using namespace std;

double square (double n){
    //Function body
    double ans;
    ans = n * n;
    return ans;
}

int main() {
    cout << square(6) << endl;
    return 0;
}
