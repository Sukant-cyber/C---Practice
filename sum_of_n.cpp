#include<iostream>
using namespace std;
int s(int n)
{
    cout<<(n*(n+1))/2;
}
int main()
{
    int n;
    cout<<"Enter of value of n: ";
    cin>>n;
    s(n);
}