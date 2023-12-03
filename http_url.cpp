#include<bits/stdc++.h>
using namespace std;

void parseUrl(string url)
{
	string host="";
	string x_port="";
	int i=0;
	while(url[i]!='\0')
	{
		if(url[i]=='/')
		{
			if(url[++i]=='/')
			{
				i++;
				while(url[i]!=':')
				{
					host+=url[i];
					i++;
				}
				break;
			}
		}
		i++;
	}
	while(url[i]!='\0')
	{
		if(url[i]==':')
		{
			i++;
			while(url[i]!='/')
			{
				x_port+=url[i];
				i++;
			}
		}
		i++;
	}
	cout<<"Host: "<<host<<endl;
	cout<<"x_port: "<<x_port<<endl;
}
int main()
{
	string url;
//	getline(cin, url);
	url="https://www.example.org:443/path/to/file";
	parseUrl(url);
}
