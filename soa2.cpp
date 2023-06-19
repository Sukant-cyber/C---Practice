#include<iostream>
using namespace std;
int sum(int arr[], int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int arr[]={12,5,4,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"The sum is: "<<sum(arr,n);
}
