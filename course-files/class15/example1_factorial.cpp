#include<iostream>
using namespace std;

int fact(int n){
   if(n <= 1) return 1;         //base case
   else return fact(n - 1) * n; //recursive case
}

int factI(int n){
  int product = 1;
  for(int j = 1; j <= n; j++){
      product *= j;
  }
  return product;
}

int main(){
   cout << fact(4) << endl;
   cout << factI(4) << endl;
   return 0;
}
