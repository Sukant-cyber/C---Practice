#include<bits/stdc++.h>
using namespace std;

void update(int *p)
{
	*p=*p+1;
	cout<<"Inside function: "<<*p<<endl;
}

int getSum(int *arr, int n)
{
//	cout<<"Size of the array in function: "<<sizeof(arr)<<endl;
	int sum=0;
	for(int i=0;i<n;i++) 
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	int arr[5]={1,2,3,4,5};
//	cout<<"Size of the array in main(): "<<sizeof(arr)<<endl;
	cout<<"Sum is: "<<getSum(arr+2, 5)<<endl;

	int num=5;
	int *p=&num;
//	cout<<"Before: "<<*p<<endl;
//	update(p);
//	cout<<"After: "<<*p;
	
}
