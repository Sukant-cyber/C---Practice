#include<iostream>
// #include<cmath>
using namespace std;
int factorial(int n)
{
    int fact=1,i;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,i;
    int fact=1;
    cout<<"Enter value of n: ";
    cin>>n;
    
    cout<<factorial(n)<<endl;
    // return 0;
}