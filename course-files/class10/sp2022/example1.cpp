#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    for (int r = 1; r <= 10; r++) {
        for (int c = 1; c < 11; c++)
            cout << left << setw(8) << r * c;
            //cout << r * c << "\t";
        cout << endl;
    }

    return 0;
}
