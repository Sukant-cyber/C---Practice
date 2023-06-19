#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the range of numbers: ";
    cin>>a>>b;
    cout<<endl<<"The prime number in given range are as follows: "<<endl;
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    
}
