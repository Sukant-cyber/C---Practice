#include<iostream>
#include<vector>
using namespace std;
int factsum(int num)
{
	vector<int> v;
	for(int i=2;i<=num;i++)
	{
		for(int j=2;j<n;j++)
		{
			if(j=i/2)
				v.push_back(i);
		}
	}
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		count+=v[i];	
	}
	cout<<endl;
	return count;
}
int main()
{
	int num = 10;
	cout<<factsum(num);
}
