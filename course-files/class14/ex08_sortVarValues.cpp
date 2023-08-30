#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sortVarValues(int	&a, int &b, int &c){
    if(a > c) swap(a, c);
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
}
int main(){
    int x = 7, y = 5, z = 10;
    sortVarValues(x,  y, z);
    cout << x << " " << y << " " << z << endl;
    return 0;
}
