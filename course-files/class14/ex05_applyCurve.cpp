#include <iostream>
using namespace std;

void applyCurve(int curveAmount, int &score){
    score = score + curveAmount;
}
int main(){
    int grade = 75;
    applyCurve(10, grade);
    cout << grade << endl;
    applyCurve(5, grade);
    cout << grade << endl;
    return 0;
}
