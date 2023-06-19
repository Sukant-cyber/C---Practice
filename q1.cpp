#include<iostream>
//#include<math.h>
using namespace std;
int main()
{

	int temp=0;
	int arr[]={10,20,11,34,54,22};
	int i,n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++){
		if(arr[i]>temp){
			temp=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]==temp){
			delete arr[4];
		}
	}
	cout<<"New array";
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	
}

