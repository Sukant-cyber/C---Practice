#include<iostream>
#include<cmath>
using namespace std;
int logic(int n)
{
    int dec=0,i=0;
    while(n!=0)
    {
        int x=n%10;
        int m=x*(pow(8,i));
        dec=dec+m;
        i++;
        n=n/10;
    }
    return dec;
}
int main()
{
    int b;
    cout<<"Enter the binary input: ";
    cin>>b;
    cout<<logic(b);
}