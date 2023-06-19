#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<2*n;i++)
    {
        if(i<=n)
        {
            for(j=0;j<=i;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(k=2*n - 1;k>=i;k-=2)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}