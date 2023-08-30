#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));

	int arr[10] = {0};
	for (int i = 0; i < 10; i++)
		arr[i] = rand()%(100-1+1) + 1; //rand()%(b - a + 1) + a
    int max = arr[0];
	for (int i = 1; i < 10; i++)
        if (max < arr[i]) max = arr[i];
	for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;
	cout << "The max is " << max << endl;
	return 0;
}
