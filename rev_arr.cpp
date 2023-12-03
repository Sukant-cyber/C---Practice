#include<iostream>
using namespace std;
int main()
{
    int arr[4]={2,7,5,9};
    int newy[4];
    for(int i=3,j=0;i>=0;i--)
    {
        newy[j]=arr[i];
        j++;
    }
    for(int i=0;i<4;i++)
    {
        arr[i]=newy[i];
        cout<<arr[i]<<"  ";
    }
    // cout<<arr[1];
}