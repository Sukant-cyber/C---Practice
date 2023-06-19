#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,c=1;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            if(k==0||i==0)
            {
                cout<<c<<" ";
            }
            else
            {
                c=c*(i-k+1)/k;
                cout<<c<<" ";
            }
        }
        cout<<endl;
    }
}