#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int key=8;
    int s=0;
    int e=7;
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;          //Should be used in place of s+e/2 because for s=2^31-1 and e=2^31-1 the mid will go out of bound of integer 
        if(arr[mid]==key)
        {
            cout<<"Element found at index "<<mid;
            exit(0);
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
    }
    cout<<"Element not Found";
}