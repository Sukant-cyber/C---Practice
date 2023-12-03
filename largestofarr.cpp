#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int x:A)
    {
        if(x>max)
        {
            max=x;
        }
    }
    cout<<"The largest number is : "<<max;
}