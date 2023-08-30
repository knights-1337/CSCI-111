#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie(){
    int roll = rand() % 6 + 1;
    return roll;
}

int main() {
    srand(time(0));
    int roll = rollDie();
    cout << roll << endl
        ;
    for(int i = 1; i <= 5; i++){
        roll = rollDie();
        cout << roll << " ";
    }
    cout << endl;

    return 0;
}
