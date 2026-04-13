// Program: Create a function to calculate power (x^y)
// Concept: Functions in C++
// Description: This program calculates x raised to the power y using a function.
// Author: Shubham Gawas

#include <iostream>
using namespace std;

int power(int x, int y)
{
    if (y < 0)
    {
        cout << "Negative exponent not supported";
        return -1;
    }

    int result = 1;

    for (int i = 1; i <= y; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    int result = power(base, exponent);

    cout << "Result: " << result << endl;

    return 0;
}