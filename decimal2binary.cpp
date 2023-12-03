#include<bits/stdc++.h>
using namespace std;
int dec2bin(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
        x*=2;
    
    while(x>0)
    {
        int lastDigit = n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int main()
{
    int dec;
    cout<<"Enter the dec: ";
    cin>>dec;
    cout<<dec2bin(dec);
}