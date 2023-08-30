#include <iostream>
using namespace std;

int main() {
    int score[4][3];
    //Get data
    for (int i = 0; i < 4; i++) {
        cout << "Please enter quiz " << i + 1 << " score for students: ";
        for (int j = 0; j < 3; j++)
            cin >> score[i][j];

    }    
    //Process the data
    for (int j = 0; j < 3; j++) {
        cout << "The average quiz score for student "  << j + 1 << ": ";
        double total = 0;
        for (int i = 0; i < 4; i++)
            total += score[i][j];
        cout << total / 4.0 << endl;
    }
    
    return 0;
}
