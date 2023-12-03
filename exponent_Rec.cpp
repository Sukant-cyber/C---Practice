#include<bits/stdc++.h>
using namespace std;
int product =1;
int exponent(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
        return a;
    else
    {
        product*=a;
    }
    exponent(a, b-1);
    return product;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<exponent(a,b);
}