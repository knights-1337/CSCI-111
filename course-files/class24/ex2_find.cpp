//Author: Rebecca Schley + Dr. Ryba
#include<iostream>
using namespace std;

int main(){
    string s = "Queens College";
    cout << s.length() << endl;            // expect 14
    cout << s.size() << endl;
    // find methods
    cout << s.find("C") << endl;           // expect 7
    cout << s.find("e") << endl;           // expect 2
    cout << s.find("eg") << endl;          // expect 11
    cout << s.rfind("e") << endl;          // expect 13
    // search for first e at or after position 7
    cout << s.find("e",7) << endl;         // expect 11
    cout << s.find("zebra") << endl;       // not there (but need casting)
    cout << (int) s.find("zebra") << endl; //expect -1
    return 0;
}
