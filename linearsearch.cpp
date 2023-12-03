#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
            
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number of elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter search elememt: ";
    cin>>x;
    int i;
    cout<<linearsearch(arr, n, x);
}

// without use of function
// for(i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//             cout<<"Element found at index "<<i;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     if(i==n)
//     {
//         cout<<"Element not found!!";
//     }