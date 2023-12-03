#include<bits/stdc++.h>
using namespace std;
void prints(int n)
{
    if(n==0)
    {
        // cout<<n;
        return;
    }

    prints(n-1);
    cout<<n;
}
int main()
{
    int n;
    cin>>n;
    prints(n);
}