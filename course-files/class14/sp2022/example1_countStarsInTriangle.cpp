#include <iostream>
using namespace std;

int countStarsInTriangle(int r){
    int answer = 0;
    for (int i = 1; i <= r; i++) answer += i;
    return answer;
}

int main() {
    int input;
    cout << "How many rows in the triangle? " << endl;
    cin >> input;

    cout << "The number of stars in the triangle with " << input << " row(s) = "
         << countStarsInTriangle(input) << endl; //Print 10 for 4 rows

    return 0;
}
