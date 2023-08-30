#include <iostream>
using namespace std;

int total(int x[], int n) {
    if (n == 0) return 0;
    return total(x, n - 1) + x[n - 1];
}

int main() {
    int x[10] = {10,9,8,7,6,5,4,3,2,1};
    cout << "Total = " << total(x, 10) << endl;   
    return 0;
}
