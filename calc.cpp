#include<iostream>
using namespace std;
int main()
{
    int a,b,n,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter the operation: ";
    cin>>n;
    while(n < 1 || n > 5)
    {
        cout<<"This is not a valid choice! Enter again:"<<endl;
        cin>>n;                                                                            
    }
    switch(n)
    {
        case 1: cout<<a+b<<endl;
        break;
        case 2: cout<<a-b<<endl;
        break;
        case 3: cout<<a*b<<endl;
        break;
        case 4: cout<<a/b<<endl;
        break;
        case 5: cout<<a%b<<endl;
        break;

        
    }
}