// Program: Student Marks Evaluation System – calculates average and decides pass/fail/distinction.
// Concepts Used: Arithmetic, Relational, Logical Operators and if-else.

#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3;
    float average;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    average = (m1 + m2 + m3) / 3.0;

    if (m1 >= 35 && m2 >= 35 && m3 >= 35)
    {
        if (average >= 75)
        {
            cout << "Result: Distinction" << endl;
            cout << "Excellent performance!" << endl;
        }
        else
        {
            cout << "Result: Pass" << endl;
        }
    }
    else
    {
        cout << "Result: Failed" << endl;
        cout << "Better luck next time." << endl;
    }

    return 0;
}