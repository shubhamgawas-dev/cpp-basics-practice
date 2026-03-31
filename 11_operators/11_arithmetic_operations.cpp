// Program: Performs arithmetic operations like addition, subtraction, multiplication, division and modulus and print result.
// Concept: Arithmetic Operators (+, -, *, /, %)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int multiplication = num1 * num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiplication: " << multiplication << endl;

    if (num2 != 0)
    {

        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    }
    else
    {
        cout << "Division and Modulusis not possible (by zero)" << endl;
    }

    return 0;
}