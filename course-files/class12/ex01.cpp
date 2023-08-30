#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 1; i <= 5; i++) {
        cout << rand() % (6 - 1 + 1) + 1 << endl; //rand() % (b - a + 1) + a
    }
    return 0;
}
