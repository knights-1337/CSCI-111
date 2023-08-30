#include<iostream>
using namespace std;

int removeFirstDigit(int n){
    //base case
    if (n < 10) {
        return 0;
    }
    //recursive case
    return n%10 + 10 * removeFirstDigit(n/10);

}

int main(){
    cout << removeFirstDigit(97531);
    cout << endl;
    return 0;
}
