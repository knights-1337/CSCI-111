#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number. ";
    cout << "The program will print the first twenty multiples of that number." << endl;
    cin >> n;

    int counter = 1;
    while (counter <= 20) {
        cout << n * counter << endl;
        counter++; //counter = counter + 1; ++counter;
        //counter += 1;
    }

    return 0;
}
