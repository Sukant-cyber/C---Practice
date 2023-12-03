#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n=5, int start=0)
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr);
    cout<<endl;
    print(arr, size, 2);
}