#include<iostream>
using namespace std;
int main()
{
	int i,j,r,c;
	cout<<"Enter no.  of rows: ";
	cin>>r;
	cout<<"Enter no. of columns: ";
	cin>>c;
	for(i=0;i<r;i++)
	{
		for(j=c;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
