#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Goal: roll a die
    srand(time(0));
    cout << rand()%(6-1+1) + 1 << endl;
    return 0;
}
