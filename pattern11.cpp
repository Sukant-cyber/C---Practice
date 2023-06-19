#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int count = 1;
        for(j=n;j>=i;j--)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
