#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n: ";
    cin>>n;
    // SIDHA LOOP WALA
    // for(i=1;i<=5;i++)
    // {
    //     for(j=i;j<=5;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // ULTA LOOP
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}