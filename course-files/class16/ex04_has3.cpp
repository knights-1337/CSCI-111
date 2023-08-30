#include <iostream>
using namespace std;

bool has3(int n) {
    if (n < 10) {
        if (n == 3) return true;
        return false;
    }
    if (n%10 == 3) return true;
    return has3(n/10);
}

int main() {
    cout << boolalpha << has3(35) << endl;
    cout << has3(1111117) << endl;
    cout << has3(537) << endl;

    return 0;
}
