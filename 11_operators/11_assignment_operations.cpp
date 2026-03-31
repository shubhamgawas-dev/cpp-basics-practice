// Program: Demonstrate assignment operators by initializing a variable.
// Concept: Assignment Operators (+=, -=, *=, /=)

#include <iostream>
using namespace std;

int main()
{
    int a = 20;

    cout << "Initial value: " << a << endl;

    a += 5; //a=a+5;
    cout << "After a+=10: " << a << endl;

    a -= 5;
    cout << "After a-=10: " << a << endl;

    a *= 5;
    cout << "After a*=10: " << a << endl;

    a /= 5;
    cout << "After a/=10: " << a << endl;

    return 0;
}