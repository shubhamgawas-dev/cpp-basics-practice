// Program: Create a function to calculate square of a number
// Concept: Functions in C++
// Author: Shubham Gawas

#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    cout << "Square: " << square(num) << endl;

    return 0;
}