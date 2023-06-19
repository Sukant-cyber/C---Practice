#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    bool count=1;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if (i%2==1)
        {
            count=1;
        }
        else
        {
            count=0;
        }
        for(j=1;j<=i;j++)
        {
            cout<<count;
            if(count==1)
            {
                count=0;
            }
            else
            {
                count=1;
            }
        }
        cout<<endl;
    }
}