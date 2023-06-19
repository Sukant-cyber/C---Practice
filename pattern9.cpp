#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter value of n(odd numbers only): ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==((n/2) + 1))
        {
            for(j=1;j<=n;j++)
            {
                cout<<"*";
                
            }
        }
        else
        {
            for(j=1;j<=n/2;j++)
            {
                cout<<" ";
                
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
