#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    //100   50  20  1
    cout<<endl<<"The number of 100rs note are: ";
    int x=n/100;
    cout<<x;
    n=n-(100*x);

    cout<<endl<<"The number of 50rs note are: ";
    int y=n/50;
    cout<<y;
    n=n-(50*y);

    cout<<endl<<"The number of 20rs note are: ";
    int z=n/20;
    cout<<z;
    n=n-(20*z);

    cout<<endl<<"The number of 1rs note are: ";
    int a=n/1;
    cout<<a;
    n=n-(1*a);
}