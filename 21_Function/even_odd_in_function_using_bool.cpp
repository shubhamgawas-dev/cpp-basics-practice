// Program: Create a function to check if a number is even or odd using bool
// Concept: Function in C++

#include <iostream>
using namespace std;
bool is_even(int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;

    if (is_even(num))
    {
        cout << "NUmber is even" << endl;
    }
    else
    {
        cout << "Number is odd " << endl;
    }
    return 0;
}