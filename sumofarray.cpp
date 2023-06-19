#include<iostream>
using namespace std;
int main()
{
	int i,a[10],temp=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number: ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		temp=temp+a[i];
	}
	cout<<temp;
}
