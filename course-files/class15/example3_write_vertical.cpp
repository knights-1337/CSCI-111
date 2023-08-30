//Written by Rebecca Schley
#include<iostream>
using namespace std;

void write_vertical(int n){
   if(n < 10) cout << n << endl;
   else{
      write_vertical(n / 10);
      cout << n % 10 << endl;
   }
}

int main(){
   write_vertical(1984);
   return 0;
}
