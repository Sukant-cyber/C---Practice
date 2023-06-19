#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        if(i<=n){
            for(j=n-1;j>=i;j--)
            {
                cout<<" ";
            }
            for(k=1;k<=i;k++)
            {
                cout<<"*";
            }
            for(l=2;l<=i;l++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(j=n+1;j<=i;j++)
            {
                cout<<" ";
            }
            for(k=2*n;k>=i+1;k--)
            {
                cout<<"*";
            }
            for(l=2*n -2;l>=i;l--)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}