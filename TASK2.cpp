#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    cout<<"Enter the operator ";
    cin>>op;
    
    switch(op)
    {
        case '+':
        cout<<"Sum is "<<a+b;
        break;
        
        case '-':
        cout<<"Difference is "<<a-b;
        break;
        
        case '*':
        cout<<"Product is "<<a*b;
        break;
        
        case '/':
        if(b!=0){
        cout<<"Quotient is "<<a/b;
        }
        else
        {
            cout<<"ERROR:Division by zero ";
        }
        break;
        default:
        cout<<"Please enter a valid operator!";
    }
}
