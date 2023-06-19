#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        // MERA WALA VERSION
        // for(j=n-1;j>=i;j--)
        // {
        //     cout<<" ";
        // }
        // for(k=1;k<=i;k++)
        // {
        //     cout<<"*";
        // }

        // LESS COMPLEX VERSION
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}