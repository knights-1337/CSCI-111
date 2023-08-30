#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string s = "hello";
    char x[10];
    strcpy(x, s.c_str());
    cout << x << endl;
    return 0;
}
