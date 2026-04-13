// Program: Function with Default Arguments
// Concept: Functions in C++, Default parameters
// Author: Shubham Gawas

#include <iostream>
using namespace std;
int multiply(int a, int b = 2)
{
    return a * b;
}
int main()
{
    cout << multiply(5) << endl;
    cout << multiply(5, 3) << endl;

    return 0;
}