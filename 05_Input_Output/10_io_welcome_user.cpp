// Program: Takes user's name as input and displays a welcome message
// Concept: Basic Input and Output (cin, cout)

#include<iostream>
using namespace std;

int main()
{
    string name;

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"WELCOME, "<<name<<"! Have a great day!"<<endl;

    return 0;
}