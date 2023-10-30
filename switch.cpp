#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter the numbers";
    cin>>a>>b;
    cout<<"enter the operation needed\n";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<a+b;
    break;

    case '-':
    cout<<a-b;
    break;

    case '*':
    cout<<a*b;
    break;

    case '/':
    cout<<a/b;
    break;

    default:
    cout<<"enter valid op\n";
    break;
    }
    return 0 ;

}