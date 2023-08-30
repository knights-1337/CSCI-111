#include <iostream>
using namespace std;

int main() {
    for (int r = 1; r <=3; r++){
        cout << "Week: " << r << endl;
        for (int c = 1; c <= 7; c++){
            cout << "Day: " << c << endl;
        }
        cout << endl;
    }
    return 0;
}
