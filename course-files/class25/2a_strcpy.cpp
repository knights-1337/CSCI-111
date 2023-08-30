#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char t[] = "Hello";
    //char t[10] {'H', 'i', '\0'};
    char x[10];
    strcpy(x, t);
    cout << t << endl;
    cout << x << endl;
    return 0;
}
