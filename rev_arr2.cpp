#include<iostream>
using namespace std;
int main()
{
	int arr[4]={22,55,100,520};
	int j=3;
	for(int i=0;i<2;i++)
	{
		int swap;
		swap=arr[i];
		arr[i]=arr[j];
		arr[j]=swap;
		j--;
//		cout<<arr[i]<<" ";
	}
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<" ";
	}
}
