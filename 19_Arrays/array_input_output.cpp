// Program to input and display array elements
// Demonstrates basic array declaration and traversal
//Traversal--Traversal means visiting each element of an array one by one.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elemnts: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Elemnts: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}