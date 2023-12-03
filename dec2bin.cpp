#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=0,n;
    int ans=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0)
    {
        // int digit=n%10;
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}