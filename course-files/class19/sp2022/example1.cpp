#include <iostream>
using namespace std;

int main() {
    //Goal: Get the average of the input values
    double score[5] = {0};
    double total = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Please enter the value for score[" << i << "]: "; 
        cin >> score[i];
    }

    for (int i = 0; i < 5; i++)
        total += score[i];

    cout << "Average is " << total / 5.0 << endl;

    return 0;
}
