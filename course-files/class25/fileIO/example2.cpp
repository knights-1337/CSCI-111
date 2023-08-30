#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ifstream f;
   f.open("out.txt");
   string x, y;
   f >> x; // extraction operator
   cout << "The first string in your file is " << x << endl;
   f >> y;
   cout << "The next string in your file is " << y << endl;
   f.close();
   return 0;
}
