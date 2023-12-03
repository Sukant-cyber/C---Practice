#include<iostream>
#include<climits>
using namespace std;
int max(int arr[],int n)
{
    int count=INT_MIN;
    for(int i=0;i<n;i++)
    {
        count=max(count,arr[i]);
    }
    return count;
}
int min(int arr[],int n)
{
    int count=INT_MAX;
    for(int i=0;i<n;i++)
    {
        count=min(count,arr[i]);
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max(arr,n)<<endl;
    cout<<min(arr,n);
    
}
