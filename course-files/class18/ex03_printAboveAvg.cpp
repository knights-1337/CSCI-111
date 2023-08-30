#include <iostream>
using namespace std;

int main() {

	double arr[5] = {0};
    cout << "Please enter 5 quiz scores: ";
	for (int i = 0; i < 5; i++) cin >> arr[i];
    double sum = 0;
	for (int i = 0; i < 5; i++) sum += arr[i];
    double avg = sum / 5;
    cout << "Avg is " << avg << endl;
	for (int i = 0; i < 5; i++) 
        if (arr[i] > avg) cout << arr[i] << " ";
    cout << endl;
	return 0;
}
