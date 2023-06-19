#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=100;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(i%j==0)
            {
                break;
            }
        }
        if(j==101)
        {
            cout<<i<<endl;
        }
    }
}