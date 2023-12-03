#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int arr2[3][3];
	int res[3][3];
	
	int i=0,j=0;
	
	// 1st array input
	cout<<"Enter 1st array: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	// 2nd array input
	cout<<"Enter 2nd array: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	// resultant array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			res[i][j]=arr[i][j]+arr2[i][j];
		}
	}
	
	// Print final array
	cout<<"The resultant array is: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
