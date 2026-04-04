// Program to count even and odd elements in array
// Demonstrates conditions and counting logic

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even Numbers: " << even << endl;
    cout << "Odd Numbers: " << odd << endl;

    return 0;
}