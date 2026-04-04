// Program to count elements greater than 10 in an array
// Demonstrates conditional checking and counting logic

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

    int greater = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 10)
        {
            greater++;
        }
    }

    cout << "Numbers greater than 10: " << greater << endl;

    return 0;
}