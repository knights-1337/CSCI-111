#include <iostream>
using namespace std;

int main() {
    //Goal: calculate the area of a rectangle
    double width, height;
    cout << "Give me the width and height of a rectangle: ";
    cin >> width >> height;

    cout << "The width of the rectangle is: " << width << endl;
    cout << "The height of the rectangle is: " << height << endl;
    cout << "The area is: " << width * height << endl;

    return 0;
}
