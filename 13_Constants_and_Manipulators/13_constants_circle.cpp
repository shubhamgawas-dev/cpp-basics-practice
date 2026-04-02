// Program: Take radius as input and calculate area of circle and circumference.
// Concept: Constants in C++

#include <iostream>
using namespace std;

int main()
{
    int r;
    const float pi = 3.14;

    cout << "Enter Radius of Circle: ";
    cin >> r;

    float areaofcircle = pi * r * r;
    float circumference = 2 * pi * r;
    cout << "Area of circle: " << areaofcircle << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}