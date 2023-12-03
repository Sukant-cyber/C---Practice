#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}