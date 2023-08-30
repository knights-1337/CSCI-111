#include<iostream>
using namespace std;

string fullName(string a, string b){
   string result = a + " " + b;
   //return a + " " + b;
   return result;
}

int main(){
   string first = "John", last = "Doe";
   string full = fullName(first, last);
   cout << "Full name: " << full << endl;
   //cout << "Full name: " << fullName(first, last) << endl;
   return 0;
}
