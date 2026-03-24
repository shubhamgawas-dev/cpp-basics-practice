#include <iostream>
using namespace std;

// Global variable.
int x = 100;

void display()
{
    int x = 50; // Local Variable.
    cout << "Local variable x inside function : " << x << endl;
}
int main()
{
    cout << "Global variable x inside the main function : " << x << endl;

    display(); // calling display function.

    cout << "Global variable x after function call : " << x << endl;

    return 0;
}