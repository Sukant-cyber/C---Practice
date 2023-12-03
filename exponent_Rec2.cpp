#include<bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    // Base Case
    if(b==0)
        return 0;
    if(b==1)
        return a;
    
    // if b is even
    if(b%2==0)
    {
        return power(a,b/2)*power(a,b/2);
    }
    // if b is odd
    else
    {
        return a*power(a,b/2)*power(a,b/2);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout<<power(a,b);
}