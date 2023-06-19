#include<iostream>
using namespace std;
int fact(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n,int r)
{
    float x;
    x=fact(n)/(fact(n-r)*fact(r));
    return x;
}
int main()
{
    int i,j,n;
    cout<<"Enter number of rows in the traingle: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<comb(i,j);
        }
        cout<<endl;
    }
}