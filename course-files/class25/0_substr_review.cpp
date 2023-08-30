#include <iostream>
using namespace std;

int main() {
    string s = "Queens College";
    string t = s.substr(7);
    cout << "line 5 for s = " << s << endl;
    cout << t << endl;  // expect College
    string u = s.substr(0, 6);
    cout << u << endl;  // expect Queens

    return 0;
}
