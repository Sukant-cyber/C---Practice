#include<iostream>
using namespace std;
int main()
{
	int s=2, n=3, m=4;
	int result1, result2;
	result1=((s*s*s)%10);
	result2=(result1*result1*result1*result1)%1000000007;
	
	cout<<result2;
	
	
}
