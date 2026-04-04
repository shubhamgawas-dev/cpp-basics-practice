// Program to copy elements from one array to another in reverse order.
// Demonstrates reverse indexing and array traversal

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr1[100], arr2[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[n - 1 - i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i]<<" ";
    }

    cout << "\nReverse array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i]<<" ";
    }

    return 0;
}