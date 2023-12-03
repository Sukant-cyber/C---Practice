#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    int count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t=2;
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<(2*i);k++)
        {
            int m=k;
            if(m<=i)
            {
                count=count+k;
                cout<<k;
            }
            else
            {
                int l=k-t;
                count=count+l;
                cout<<l;
                t+=2;
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl<<count;
}