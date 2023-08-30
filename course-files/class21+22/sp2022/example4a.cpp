#include <iostream>
using namespace std;

int main() {
    //Goal: Print the average of the quiz scores per student
    double score[4][3];
    double avg[3];

    for (int i = 0; i < 4; i++){
        cout << "Please enter the quiz " << i + 1 << " scores for 3 students:\n";
        for (int j = 0; j < 3; j++){
              cin >> score[i][j];
        }
    }

    for (int j = 0; j < 3; j++){
        double sum = 0;
        for (int i = 0; i < 4; i++){
           sum += score[i][j]; 
        }
        avg[j] = sum / 4.0;
    }
    
    for (int i = 0; i < 3; i++){
        cout << "The average for student " << i + 1 << " is: " << avg[i] << endl;
    }
    return 0;
}
