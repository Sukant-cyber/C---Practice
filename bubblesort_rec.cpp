#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int* arr, int size)
{
    if(size == 0 || size == 1)
    {
        return;
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i-1]>arr[i])
        {
            swap(arr[i], arr[i-1]);
        }
    }

    bubbleSort(arr, size-1);
}
int main()
{
    int arr[] = {11,12,13,45,78,45,85,12,45,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}