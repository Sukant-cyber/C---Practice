#include<iostream>
using namespace std;
// code to find the number of ones in the binary representation of the number
int bin(int num)
{
    int count = 0;
    while(num!=0)
    {
        int bit = num&1;
        num=num>>1;
        if(bit==1)
            count++;
    }
    return count;
}
int setcount(int a, int b)
{
    return bin(a)+bin(b);
}
int main()
{
    int a,b;
    cout<<"Enter the two number: ";
    cin>>a>>b;
    cout<<setcount(a,b);
}