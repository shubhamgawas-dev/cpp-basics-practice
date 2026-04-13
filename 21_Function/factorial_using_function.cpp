// Program: Create a function to calculate factorial using loop
// Concept: Functions in C++
// Description: This program calculates the factorial of a number using a user-defined function and loop.
// Author: Shubham Gawas

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int Result = factorial(num);

    cout << "Factorial of " << num << " is: " << Result << endl;

    return 0;
}