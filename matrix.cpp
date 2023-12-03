#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[3][2];
	cout << "Enter the elements of the array: "<< endl;
	
	// INPUT LENE K LIYE
	for(int i=0; i<3; i++ )
	{
		for(int j=0; j<2; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "The output is: "<<endl;
	// OUTPUT K LIYE
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	
}
