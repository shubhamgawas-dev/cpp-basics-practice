// Program: Create a function that takes two integers and returns their sum.
// Concept: Functions in C++

#include <iostream>
using namespace std;

int addNumbers(int, int);

int main()
{
    int num1, num2;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    cout << "Addition of " << num1 << " and " << num2 << " is: " << addNumbers(num1, num2) << endl;
    return 0;
}

int addNumbers(int a, int b)
{
    return a + b;
}