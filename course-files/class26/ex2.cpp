#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <=10 ; i++){
        if (i%3 == 0) continue;
        cout << i << endl;
    }

    cout << "\n\n\n";

    for (int i = 1; i <=10 ; i++){
        if (i == 8) break;
        cout << i << endl;
    }

    return 0;
}
