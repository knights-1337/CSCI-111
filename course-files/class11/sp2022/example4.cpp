#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i < 5; i++)
        cout << rand()%(99-10+1) + 10 << " ";
    cout << endl;
    return 0;
}
