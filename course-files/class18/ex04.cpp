#include <iostream>
using namespace std;

int main() {
    string names[3] = {"John", "Mary", "James"};
    double scores[3] = {100, 99.9, 100};

    for (int i = 0; i < 3; i++) {
        cout << names[i] << "\t" << scores[i] << endl;
    }

    return 0;
}
