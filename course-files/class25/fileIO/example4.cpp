#include <iostream>
#include <fstream>
using namespace std;

int main() {

   string fileName;
   ifstream f;
   char x;

   cout <<"Which file? ";
   cin >> fileName;
   f.open(fileName.c_str());
   if (!f.is_open()) return 0;
   //x = f.get();
   while (!f.eof()) {
     cout << x;
     x = f.get();
   }
   cout << endl;
   f.close();
   return 0;
}

