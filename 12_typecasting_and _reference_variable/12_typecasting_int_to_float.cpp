// Program: Converts an integer value into a float using typecasting
// Concept: Typecasting (int to float)

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    float result = (float)num;

    cout << "Converted float value: " << result << endl;

    return 0;
}