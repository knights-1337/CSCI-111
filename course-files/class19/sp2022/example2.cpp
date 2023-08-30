#include <iostream>
using namespace std;

int main() {
    //Goal: Print out the name of students whose score is above average
    string student[5] = {"John", "Jack", "Mary", "Susan", "Michael"};
    double quiz1[5] = {0};
    double total = 0, avg = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Please enter the quiz 1 score for "<< student[i] << ": "; 
        cin >> quiz1[i];
    }

    for (int i = 0; i < 5; i++)
        total += quiz1[i];

    avg = total / 5.0;

    cout << "The following students have a score higher than the average:\n";

    for (int i = 0; i < 5; i++) {
        if (quiz1[i] > avg) cout << student[i] << " ";
    }

    cout << endl;

    return 0;
}
