#include<bits/stdc++.h>
using namespace std;
void selectSort(int arr[], int n, int i=0)
{
    if(i == n-1)
    {
        return;
    }

    int minIndex = i;
    for(int j=i;j<n;j++)
    {
        if(arr[j]<arr[minIndex])
        {
            minIndex=j;
        }
    }
    swap(arr[i], arr[minIndex]);

    selectSort(arr, n, i+1);
}
int main()
{
    int arr[] = {10,9,7,78,85,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}