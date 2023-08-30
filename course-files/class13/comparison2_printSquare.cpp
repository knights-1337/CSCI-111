#include <iostream>
using namespace std;

void printSquare(int dimension){
    for(int r = 1; r <= dimension; r++){
        for(int c = 1; c <= dimension; c++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int size1, size2;
    cout << "I will print two squares for you.\n";
    cout << "Size for first? ";
    cin >> size1;
    cout << "Size for second? ";
    cin >> size2;
    printSquare(size1);
    printSquare(size2);
    return 0;
}
