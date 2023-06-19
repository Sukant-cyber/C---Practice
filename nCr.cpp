#include<iostream>
// #include<cmath>
using namespace std;
int factorial(int num)
{
    int fact=1,i;
    for(i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    float comb;
    cout<<"Enter the n and r for the combination: ";
    cin>>n>>r;
    comb=factorial(n)/(factorial(n-r)*factorial(r));
    if(n<r)
    {
        cout<<"n must be greater than r for finding the combination!!";
    }
    else
    {
        cout<<"The combination is: "<<comb;
    }
}