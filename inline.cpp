#include<bits/stdc++.h>
#include<math.h>
using namespace std;
inline int getMax(int& a, int& b)
{
    if(a>=b)
    {
        a+=2;
        b=pow(b,2);
        return a;
    }    
    else    
    {
        b+=1;
        a=pow(a,2);
        return b;
    }
        
}
int main()
{
    int a=1, b=2;
    int ans;
    ans=getMax(a,b);
    cout<<ans<<endl;
    a+=2;
    b+=1;
    ans=getMax(a,b);
    cout<<ans<<endl;
}