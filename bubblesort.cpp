// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int counter=0;
//     while(counter<n-1)
//     {
//         for(int i=0;i<n-counter;i++)
//         {
//             if(arr[i]>arr[i+1])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {6,3,0,5,87};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i];
    // }
}