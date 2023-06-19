#include<iostream>
//#include<math.h>
using namespace std;
int main()
{
	int i,n;
	int arr[10];
	float m;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	m=sum/n;
	cout<<"The mean is:"<<m;
}
