// #include<iostream>
// using namespace std;
// int selectionsort(int arr[],int n)
// {
//     // for(int i=0;i<n-1;i++)
//     // {
//     //     for(int j=i+1;j<n;j++)
//     //     {
//     //         if(arr[j]<arr[i])
//     //         {
//     //             int temp;
//     //             temp=arr[j];
//     //             arr[j]=arr[i];
//     //             arr[i]=temp;

//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // for(int i=0;i<n-1;i++)
//     // {
//     //     for(int j=i+1;j<n;j++)
//     //     {
//     //         if (arr[j]<arr[i])
//     //         {
//     //             int temp;
//     //             temp=arr[j];
//     //             arr[j]=arr[i];
//     //             arr[i]=temp;
//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }

//     //output
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;
void selectSort(int* arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int min = INT_MAX;
        int counter=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[counter])
            {
                counter=j;
            }
            
        }
        swap(arr[i], arr[counter]);
    }
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