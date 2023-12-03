#include<bits/stdc++.h>
#include<map>
using namespace std;
string sayDigit(int n)
{
	map<int, string> m;
	m[0] = "Zero";
	m[1] = "One";
	m[2] = "Two";
	m[3] = "Three";
	m[4] = "Four";
	m[5] = "Five";
	m[6] = "Six";
	m[7] = "Seven";
	m[8] = "Eight";
	m[9] = "Nine";
	string space = " ";
	string ans = "";
	int rem;
	while(n != 0)
	{
		rem = n%10;
		n = n/10;
		ans .insert(0, m[rem]+space);
	}
	return ans;
}
int main()
{
	
	cout << "Enter the number: ";
	int n;
	cin >> n;
	cout << sayDigit(n);
}
