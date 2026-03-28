// Program: Performs arithmetic operations like addition, subtraction, multiplication, and division
// Concept: Arithmetic Operators (+, -, *, /)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter value of num1: ";
    cin >> num1;

    cout << "Enter value of num2: ";
    cin >> num2;
    
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;

    cout << "The sum is: " << sum << endl;
    cout << "The subtraction is: " << sub << endl;
    cout << "The Multiplication is: " << mul << endl;
    
    if (num2 != 0)
    {
        cout << "The division is: " << (float)num1 / num2 << endl;
    }
    else{
        cout<<"Division not possible(Cannot divide by zero)"<<endl;
    }

    return 0;
}