// Program to copy elements from one array to another
// Demonstrates array traversal and assignment

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr1[n], arr2[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // For copying elements
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Original array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nCopied array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}