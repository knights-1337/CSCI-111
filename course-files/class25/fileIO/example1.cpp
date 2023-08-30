#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //ofstream f;
    //f.open("out.txt");
    ofstream f("out.txt");
    if (!f.is_open()) {
        cout << "Cannot open file. See ya." << endl;
        return 0;
    }
    f << "Hello" << endl;  // insertion operator
    f << "World" << endl;
    f.close();
    return 0;
}

/*
    To append to an existing file instead of overwriting it,
    use the ios:app flag.
    For example: f.open("out.txt", ios:app);
*/
