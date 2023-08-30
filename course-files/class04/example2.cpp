#include <iostream>
using namespace std;

int main() {
    double score;
    cout << "Please give me your score for exam 1: ";
    cin >> score;

    if (score >= 32) 
        cout << "Decent! Keep it up.\n";
    else {
        cout << "You need some practice.\n";
        cout << endl;
    }

    return 0;
}
