#include<iostream>
using namespace std;
void fib(int num)
{
    int i,i1=0,i2=1;
    for(i=1;i<=num;i++)
    {
            cout<<i1<<endl;
            int temp=i1+i2;
            i1=i2;
            i2=temp;
        
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the number of terms in the series: ";
    cin>>n;
    fib(n);
}