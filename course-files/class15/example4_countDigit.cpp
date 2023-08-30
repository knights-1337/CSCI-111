#include<iostream>
using namespace std;

int countDigit(int n){
   if(n < 10) return 1;
   return 1 + countDigit(n / 10);
}

int main(){
   cout << countDigit(198439) << endl;
   return 0;
}
