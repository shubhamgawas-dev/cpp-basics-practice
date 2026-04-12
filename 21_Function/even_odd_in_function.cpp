// Program: Create a function to check if a number is even or odd
// Concept: Function in C++

#include <iostream>
using namespace std;

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (is_even(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }

    return 0;
}