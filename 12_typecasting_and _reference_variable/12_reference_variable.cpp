// Program: Demonstrates the use of reference variables
// Concept: Reference Variables (&)

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int &ref = a;

    cout << "Value of a: " << a << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 99;

    cout << "After changing ref.... " << endl;
    cout << "value of a: " << a << endl;
    cout << "value of ref: " << ref << endl;

    return 0;
}