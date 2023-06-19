#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    int m=4;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        int count=n-m;
        for(k=1;k<=i;k++)
        {
            cout<<count;
            count--;
        }
        m--;
        int x=2;
        for(l=2;l<=i;l++)
        {
            cout<<x;
            x++;
        }
        cout<<endl;
    }
}