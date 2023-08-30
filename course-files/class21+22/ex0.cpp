#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int a[5][5];
  int b[5] = {0};
  
  for (int r = 0; r < 5; r++){
    for (int c = 0; c < 5; c++){
      a[r][c] = rand()%(99 - 10 + 1) + 10;  
    }
  }
  
  for (int r = 0; r < 5; r++){
    for (int c = 0; c < 5; c++){
      cout << a[r][c] << " ";  
    }
    cout << endl;
  }

  for (int r = 0; r < 5; r++){
    int oddCount = 0;
    for (int c = 0; c < 5; c++){
      if(a[r][c]%2 == 1) oddCount++;  
    }
    b[r] = oddCount;
  }

  cout << "Count\t" << "Odd elements\n";
  for (int r = 0; r < 5; r++){
    cout << b[r] << "\t";
    for (int c = 0; c < 5; c++){
      if(a[r][c]%2 == 1)
        cout << a[r][c] << " ";  
    }
    cout << endl;
  }  
  return 0;
}