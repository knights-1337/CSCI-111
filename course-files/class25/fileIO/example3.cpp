#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream f;
    f.open("animals.txt");
    char x = f.get();  // get next character
    while(!f.eof()){   // while you have not yet reached the end of the file
        cout << x;     // print character to monitor
        x = f.get();   // get next character
    }

    f.close();
    return 0;
}
