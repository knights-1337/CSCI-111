#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void secretName(string	name){
    int coinToss = rand()%2;
    if(coinToss == 0) name = "Bob"; 
    else name = "Sandy";
}
int main(){ 
    srand(time(0)); 
    string name;
    cout << "What is your name? ";
    cin >> name; 
    secretName(name);
    cout << "Your name is actually " << name << endl;
    return 0;
}
