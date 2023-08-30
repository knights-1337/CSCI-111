#include <iostream>
using namespace std;

int main() {
    double arr[5];
    cout << "Please enter 5 numbers: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    for (int i = 4; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
