#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}