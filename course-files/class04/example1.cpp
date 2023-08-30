#include <iostream>
using namespace std;

int main() {
    double score;
    cout << "Please give me your score for exam 1: ";
    cin >> score;

    if (score >= 32) 
        cout << "Good job! Keep it up.\n";
    
    return 0;
}
