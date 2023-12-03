#include<bits/stdc++.h>
using namespace std;
bool primes(int n)
{
    if(n<=2)
    {
        return 1;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int primecount(int n)
{
    int count = 0;
    int j;
    for(int i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j==i)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The number of primes is: "<<primecount(n);
    /*if(primes(n))
        cout<<"The number is prime!!";
    else
        cout<<"The number is not prime!!";*/
}