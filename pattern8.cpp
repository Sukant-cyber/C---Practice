#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        int c=1+(i-1)*2;
        for(j=1;j<=c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}