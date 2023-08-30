#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));

	int arr[10] = {0};
	for (int i = 0; i < 10; i++)
		arr[i] = rand()%(20-1+1) + 1; //rand()%(b - a + 1) + a
	for (int i = 0; i < 10; i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)
		if (arr[i] % 2 == 0) cout << arr[i] << " ";
	cout << endl;
	for (int i = 9; i >= 0; i--)
		if (arr[i] % 2 != 0) cout << arr[i] << " ";
	cout << endl;
		
	return 0;
}
