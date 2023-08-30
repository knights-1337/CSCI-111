//Author: Rebecca Schley

#include<iostream>
using namespace std;

int main(){
    char ans;
    cout << "Are you having fun? ";
    cin >> ans;
    while(ans == 'y'|| ans == 'Y'){
        cout << "Are you having fun yet? ";
        cin >> ans;
    }
    cout << "Too bad!" << endl;
    return 0;
}
