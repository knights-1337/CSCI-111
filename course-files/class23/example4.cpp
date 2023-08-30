#include <iostream>
using namespace std;

string toLower(string a){
  for(int i = 0; i < a.size(); i++){
    if(a[i] >= 65 && a[i] <= 90) a[i] +=32;
  }
  return a;
}
  
int main() {
   string s = "HELLO";
   string s1 = toLower(s);
   cout << s1 << endl;
   return 0;
}
