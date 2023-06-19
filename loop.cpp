#include<iostream>  
using namespace std;
int main()
{
    int n,count=0,i;
    cout<<"Enter the number: ";
    cin>>n;
    int j=n;
    // for(i=1;i<=n;i++){
    //     count=count+i;
    //     // count=count+j;
    //     // j=j-1;
    // }
    while(n!=0)
    {
        count=count+n;
        n--;
    }
    cout<<"The sum is: "<<count;
}