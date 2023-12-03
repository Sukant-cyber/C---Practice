#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans="";
    int one=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            one=1;
        }
        if(one==1&&str[i]=='0')
        {
            
        }
        else
        {
            ans+=str[i];
        }
    }
    
    cout<<str.length()-ans.length();
}