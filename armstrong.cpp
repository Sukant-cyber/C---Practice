#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,lastdigit;
    cout<<"Enter value of n: ";
    cin>>n;
    int x=n;
    int sum=0;
    while(n>0)
    {
        lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if (x==sum)
    {
        cout<<"Armstrong!";
    }
    else
    {
        cout<<"Not armstrong!!";
        cout<<"\nThe sum is "<<sum;
    }
}