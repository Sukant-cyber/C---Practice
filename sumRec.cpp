#include<bits/stdc++.h>
using namespace std;

int ArrSum(int arr[], int size)
{
    // base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    return arr[0] + ArrSum(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << ArrSum(arr, size);
}
