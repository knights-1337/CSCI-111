#include <iostream>
using namespace std;

int main() {
    
    for (int r = 1; r <= 10; r++){
        int sum = 0;
        for (int c = 1; c<=r; c++){
            cout << c;
            if (c < r) cout << "+";
            else cout << "=";
            sum += c;
        }
       cout << sum << endl; 
    }    

    return 0;
}
