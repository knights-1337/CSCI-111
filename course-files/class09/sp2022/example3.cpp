#include <iostream>
using namespace std;

int main() {
    int size, r, c;
    cout << "Enter sizes of squares, negative to end: ";
    cin >> size;

    while (size > 0) {
        for (r = 1; r <= size; r++){
            for (c = 1; c <= size; c++)
                cout << "*";
            cout << endl;
        }
        //cout << "r and c = " << r << " " << c << endl;
        cout << "Enter another: ";
        cin >> size;
    }
    return 0;
}
