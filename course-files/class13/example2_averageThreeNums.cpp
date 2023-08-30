#include<iostream>
using namespace std;

double averageThreeNums(int a, int b, int c){
   return (a + b + c) / 3.0;
}

int main(){
   int a = 3, b = 4, c = 6;
   double average = averageThreeNums(a, b, c);
   cout << "Average = " << average << endl;
   return 0;
}
