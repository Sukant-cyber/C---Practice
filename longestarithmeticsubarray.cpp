#include<iostream>
using namespace std;
int sub(int arr[],int n)
{
    int pd=0;
    int nd=0;
    int count=1, max=0;
    for(int i=0;i<n;i++)
    {
        nd=arr[i]-arr[i+1];
        if(pd==nd)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
        }
        pd=nd;
    }
    return max+1;
}
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sub(arr,n);
}