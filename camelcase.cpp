#include<bits/stdc++.h>
using namespace std;
void camel(string s)
{
    int i=0;
    // int m=0;
    while(s[i]!='\0')
    {
        if(isupper(s[i]))
        {
            cout<<endl;
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
        else
        {
            s[i]=toupper(s[i]);
            cout<<s[i];
            // s[i]=toupper(s[i]);
        }
        // if(m==1)
        // {
        //     s[i]=tolower(s[i]);
        //     cout<<s[i];
        //     m=0;
        // }
    }
}
int main()
{
    string s;
    cin>>s;
    camel(s);
}