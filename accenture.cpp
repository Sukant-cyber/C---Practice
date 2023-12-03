#include<iostream>
using namespace std;
int newy(int arr[], int start, int end)
{
	int mid = (start+end)/2;
	while(mid>0 || arr[mid]<0)
	{
		if(arr[mid]>=0)
			return arr[mid];
		if(mid==0)
			return -1;
		else
		{
			mid--;
//			cout<<mid;
		}
	}
}
int main()
{
	int arr[11]={1,2,3,-5,-6,8,9,5,7,10,0};
	int start = 0;
	int end = 10;
	cout<<newy(arr, start, end);
}
