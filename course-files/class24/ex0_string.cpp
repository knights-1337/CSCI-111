#include <iostream>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    s3 = s1;
    cout << s3 << endl;
    s3 = s3 + s2;
    cout << s3 << endl;
    s3 += s2;
    cout << s3 << endl;
    cout << s1 + " " + s2 << endl;
    return 0;
}
