#include <iostream>
#include <cstdlib> //rand, srand
#include <ctime> //time
using namespace std;

int main() {
    srand(time(0));
    for (int i = 1; i <= 10; i++)
        cout << rand()%10 + 1 << endl; //rand() % (b - a + 1) + a
    return 0;
}
