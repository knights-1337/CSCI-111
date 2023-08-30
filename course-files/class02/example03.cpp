#include <iostream>
using namespace std;

int main() {
    //Goal: calculate the area of a rectangle
    double width, height;
    cout << "Give me the width of a rectangle: ";
    cin >> width;
    cout << "Give me the height of a rectangle: ";
    cin >> height;

    cout << "The width of the rectangle is: " << width << endl;
    cout << "The height of the rectangle is: " << height << endl;
    cout << "The area is: " << width * height << endl;

    return 0;
}
