#include<iostream>
using namespace std;
void unique(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        int j=0;
        while(j!=size)
        {
            if((arr[j]==arr[i])&&(i!=j))
            {
                // cout<<"Element is not unique: "<<arr[i]<<endl;
                break;
            }
            j++;
        }
        if(j==size)
        {
            cout<<"Element is unique: "<<arr[i]<<endl;
        }
    }
}
int main()
{
    int n;
    int arr[100];
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);
}