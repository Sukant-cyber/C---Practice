#include<iostream>
using namespace std;

void indexArr(int arr[], int n)
{
	int result[4] = {0};
	for(int i=0;i<n;i++)
	{
		int m = arr[i];
		result[m] = i;
	}
	
	for(int i=0;i<n;i++)
	{
		cout << result[i] << " ";
	}
}
int main()
{
	int arr[4] = {1,2,0,3};
	indexArr(arr, 4);
}
