#include <iostream>
using namespace std;

void printASCII(){
  cout << "ASCII\tCHARACTER\n";
  for(int i = 33; i <= 126; i++){
    cout << i << "\t\t" << (char)i << endl;
  }
}

int main() {
  printASCII();
  return 0;
}
