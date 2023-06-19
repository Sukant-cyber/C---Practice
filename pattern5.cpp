#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n: ";
    cin>>n;
    int count=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }
}