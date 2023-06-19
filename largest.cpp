#include<iostream>
using namespace std;
int largest(int a,int b,int c)
{
	if((a>b)&&(a>c)){
		return a;
	}
	if((b>c)&&(b>a)){
		return b;
	}
	return c;
}
int main()
{
	int a=100,b=10000,c=1000000;
	cout<<"The largest is: "<<largest(a,b,c);
	
}
