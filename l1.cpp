#include<bits/stdc++.h>
using namespace std;
void upper(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(isupper(s[i]))
        {
            if(i!=0)
            {
                cout<<endl;
            }
            s[i]=s[i]-'A'+'a';
            cout<<s[i];
        }
        else{
            s[i]=toupper(s[i]);
            cout<<s[i];
        }
        i++;
    }
    
}
int main()
{
    string s;
    cin>>s;
    upper(s);
}