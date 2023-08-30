#include <iostream>
using namespace std;

int f(int x, int &y) {
	x = x + 1;
	y = x - 1;
	return x + y;
}
int main() {
	int x[4] = {4, 3, 2, 1};
	int y[6] = {2, 3, 5, 7, 11, 13};
	cout<< y[3] % 7 << endl; // line (a)
	cout<< y[x[1]] << endl; // line (b)
	cout<< f(x[0], y[0]) << endl; // line (c)
	cout<< y[0] << endl; // line (d)
	return 0;
}
