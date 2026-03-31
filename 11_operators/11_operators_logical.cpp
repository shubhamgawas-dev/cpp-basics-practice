// Program: Demonstrates logical operators using conditions.
// Concept: Logical Operators (&&, ||, !)

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 60)
    {
        cout << "You are eligible to work." << endl;
    }

    if (age < 18 || age > 60)
    {
        cout << "You are not in working age group." << endl;
    }
    
    if (!(age < 18))
    {
        cout << "You are 18 or older." << endl;
    }

    return 0;
}