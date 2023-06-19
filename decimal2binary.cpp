#include<bits/stdc++.h>
using namespace std;
int dec2bin(int n)
{
    int bin;
    while(n!=1)
    {
        bin=n%2;
        n/=2;
    }
}
int main()
{
    int dec;
    cout<<"Enter the dec: ";
    cin>>dec;
    cout<<dec2bin(dec);
}