// Program: Takes user's full name as input and displays a personalized welcome message
// Concept: Basic Input and Output using getline()

#include<iostream>
using namespace std;

int main()
{
    string name;

    cout<<"Enter Your Name: ";
    getline(cin,name);

    cout<<"Welcome, "<<name<<"! Have a great day."<<endl;

    return 0;
}