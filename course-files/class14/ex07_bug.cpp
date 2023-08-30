#include <iostream>
using namespace std;

void doubleNum(int &a){
    cout << "Your number doubled is " << 2 * a << endl;
}

int main(){
    cout << "My number is 15" << endl; 
    doubleNum(15);

    return 0;
}
