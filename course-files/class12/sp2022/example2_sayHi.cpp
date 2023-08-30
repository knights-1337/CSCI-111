#include <iostream>
using namespace std;

void sayHi(string s){
    cout << "Hi, " << s << endl;
    return;
}

int main () {
    //Goal: ask for a name and say hi 
    string name;
    cout << "Please tell me your first name: ";
    cin >> name;

    sayHi(name);

    return 0;
}
