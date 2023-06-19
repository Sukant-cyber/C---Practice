#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if((a%2==0)&&(a%3==0))
    {
        cout<<"Divisible by 2,3 both!"<<endl;
    }
    else if((a%2==0)||(a%3==0))
    {
        cout<<"Divisible by any of the two!"<<endl;
    }
    else
    {
        cout<<"Not divisible by any of the numbers!";
    }
}