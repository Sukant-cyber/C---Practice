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
        int count=1 + (i-1)*2;
        for(k=1;k<=count;k++)
        {
            if((i==1)||(i==n)||(k==1)||(k==count))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}