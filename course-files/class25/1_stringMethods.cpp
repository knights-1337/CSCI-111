#include <iostream>
using namespace std;

int main() {
    string s = "NY";
    s = s.insert(1,"ew ");
    cout << "line 7 = " << s << endl;  // expect New Y
    s = s + "ork";
    cout << s << endl;  // expect New York

    s = s.erase(3, 5);
    cout << "line 12 = " << s << endl;  // expect New

    s += " Jersey";
    cout << s << endl;  // expect New Jersey
    s = s.replace(4, 6, "York");
    cout << "line 17 = " << s << endl;  // expect New York

    s = "Old Jersey";
    if (0 <= (int) s.find("Jersey"))
        s = s.replace(s.find("Jersey"),6, "York");
    cout << "line 22 = " << s << endl;  // expect Old York

    s.append(" Town");
    cout << "line 25 = " << s << endl; //expect Old York Town

    return 0;
}
