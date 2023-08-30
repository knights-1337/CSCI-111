#include <iostream>
using namespace std;

int main() {
   cout << (int) 'A' << " ";
   cout << (int) 'B' << " ";
   cout << (int) 'C' << " ";
   cout << (int) 'Z' << " ";
   cout << (int) 'a' << " ";
   cout << (int) 'b' << " ";
   cout << (int) 'c' << " ";
   cout << (int) 'z' << " ";
   cout << (int) '0' << " ";
   cout << (int) '9' << " ";

   char c = 'b';
   c = c - 32;
   cout << endl << c << endl;           // expect B
   cout << c + 32 << endl;              // expect 98
   cout << (char) (c + 32) << endl;     // expect b

   return 0;
}
