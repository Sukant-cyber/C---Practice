#include<bits/stdc++.h>
using namespace std;
bool binSearch(int arr[], int start, int end, int key)
{
    if(start>=end)
    {
        // cout<<"Start greater than end!";
        return false;
    }
    int mid = (start+end)/2;
    if(arr[mid] == key)
    {
        // cout<<"Found the element!!";
        return true;
    }
    if(key>arr[mid])
    {
        start=mid+1;
        return binSearch(arr, start, end, key);
    }
    else{
        end=mid-1;
        return binSearch(arr, start, end, key);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int start = 0; 
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int key = 7;
    if(binSearch(arr, start, end, key))
    {
        cout<<"Element Found!!";
    }
    else{
        cout<<"Element not Found!!";
    }
}