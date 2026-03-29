// Program: Converts a float value into an integer using typecasting
// Concept: Typecasting (float to int)

#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "Enter a Number: ";
    cin >> num;

    int result = (int)num;

    cout<<"After typecasting the Number is: "<<result;

    return 0;
}