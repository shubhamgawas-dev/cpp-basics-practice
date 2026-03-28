// Program: Compares two numbers using relational operators
// Concept: Relational Operators (>, <, ==, !=)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter Number 1: " ;
    cin >> num1;

    cout << "Enter Number 2: " ;
    cin >> num2;

    cout << "num1 > num2: " << (num1 > num2)<<endl;
    cout << "num1 < num2: " << (num1 < num2)<<endl;
    cout << "num1 == num2: " << (num1 == num2)<<endl;
    cout << "num1 != num2: " << (num1 != num2)<<endl;
    
    return 0;
}