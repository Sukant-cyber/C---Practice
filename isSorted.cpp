#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    // base case
    if(size == 1 || size == 0)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        isSorted(arr+1, size-1);
    }
}
int main()
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,18};
    int size=10;
    if(isSorted(arr,10)){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
}