// Program: Create a function to find maximum of two numbers
// Concept: Functions in C++
// Author: Shubham Gawas

#include <iostream>
using namespace std;

int max_of_two(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    int Result = max_of_two(num1, num2);

    cout << "Maximum Number is: " << Result << endl;

    return 0;
}