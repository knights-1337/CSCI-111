#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[]){
    ifstream f1;
    ofstream f2;

    f1.open(argv[1]); // connect f1 to command-line argument
    f2.open(argv[2]); // connect f2 to command-line argument

    if(!f1.is_open()) return 0;

//    char x = f1.get(); // get the first char from f1
    while(!f1.eof()){
        f2 << x; // and copy each char to f2
        x = f1.get(); // go through f1 char by char
    }

    f1.close();
    f2.close();

    return 0;
}
