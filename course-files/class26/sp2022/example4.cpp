#include <iostream>
using namespace std;

int main(){
    int i = 5, j, k;
    j = i++;
    k = ++i;
    cout << j << endl;
    cout << k << endl;
    return 0;
}
