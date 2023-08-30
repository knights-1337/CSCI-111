#include <iostream>
using namespace std;

void row(int x, string s) {
   for (int c = 1; c <= x; c++) {
      cout << s;
   }
}

int main() {
   row (6, "Hello ");
   cout << endl << endl;

   for (int r = 1; r <= 5; r++) {
     row(r, "*");
     cout << endl;
   }

   cout << endl << endl;
   for (int r = 5; r >= 1; r--) {
     row(5 - r," ");
     row(r, "*");
     cout << endl;
   }
   
   return 0;
}
