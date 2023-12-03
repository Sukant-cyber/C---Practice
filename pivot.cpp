#include<iostream>
using namespace std;
int pivotIndex(int arr[], int size)
{
    int s=0;
    int e=4;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}
int main()
{
    int arr[5]={8,9,10,0,1};
    cout<<pivotIndex(arr, 5);

}