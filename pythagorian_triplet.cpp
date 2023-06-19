#include<iostream>
#include<math.h>
using namespace std;
bool check(int n1,int n2,int n3)
{
    n1=n1*n1;
    n2=n2*n2;
    n3=n3*n3;
    return n3==n1+n2;
}
int main()
{
    int a,b,c;
    cout<<"Enter the numbers in the triplet(in ascending order): ";
    cin>>a>>b>>c;
    if(check(a,b,c))
    {
        cout<<"TRUE!!";
    }
    else
    {
        cout<<"FALSE!!";
    }
}