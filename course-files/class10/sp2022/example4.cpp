#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x = time(0), y;
    cout << "Please enter a whole number: ";
    cin >> y;

    y = time(0);

    cout << "Your reaction time is " << y - x << " seconds.\n";

    return 0;
}
