#include<bits/stdc++.h>
using namespace std;

void update(int *p)
{
//	cout << "Value of *p inside update before: " << *p <<endl;
	*p = *p + 1;
//	cout << "Value of *p inside update after: " << *p <<endl;
//	cout << "Value of p inside update before: " << p <<endl;
	p = p + 1;
//	cout << "Value of p inside update after: " << p <<endl;
//	return p;
}


void printSize(int *arr, int n)
{
	cout << "Size of the pointer: " <<sizeof(arr) << endl;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += i[arr];
	}
	cout << sum << endl;
}
int main()
{
	int value = 5;
	int *p = &value;
//	cout << "Value of *p: " << *p << endl;
//	cout << "Value of &p: " << &p << endl;
	
//	update(p);
//	cout << "Value of p outside update before: " << p <<endl;
//	cout << "Value of *p inside update before: " << *p <<endl;
	
	int arr[10] = {1,2,3,4,5};			
	cout << sizeof(arr) << endl;		// 4*10 = 40
	printSize(arr, 5);
	
}
