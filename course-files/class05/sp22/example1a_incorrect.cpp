#include<iostream>
using namespace std;

int main(){
   double score;
   cout << "What is your score? ";
   cin >> score;
   if(score >= 90){
      cout << "A!" << endl;
   }
   if(score >= 80){
      cout << "B" << endl;
   }
   if(score >= 73){
      cout << "C" << endl;
   }
   else {
      cout << "You earn a grade that is not sufficient to move on to the next class." << endl;
   }   
   return 0;
}
