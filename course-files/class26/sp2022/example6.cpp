#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(0));
  char x = (char)(rand()%(90 - 65 + 1) + 65);
  char y = (char)(rand()%(122 - 97 + 1) + 97);
  cout << x << endl;
  cout << y << endl;
  return 0;
} 
