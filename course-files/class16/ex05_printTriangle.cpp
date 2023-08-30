#include<iostream>
using namespace std;

void print_triangle(int n){
    //base case
    if (n == 1) {
        cout << "*" << endl;
        return;
    }
    else {
        //recursive case
        print_triangle(n - 1);
        for (int i = 1; i <= n; i++) cout << "*";
        cout << endl;
    }

}

int main(){
    print_triangle(7);
    cout << endl;
    return 0;
}
