#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cout<<"Enter string: ";
    cin>>c;
    for(int i=0;i<c.length();i++)
    {
        if((c[i]<='Z')&&(c[i]>='A'))
        {
            c[i]=c[i]-'A'+'a';
        }
    }
    int s=0,e=c.length()-1;
    while(s<e)
    {
        if(c[s]!=c[e])
        {
            cout<<"Not a palindrome!!";
            break;
        }
    }
    if(s==e)
    {
        cout<<"Palindrome!!";
    }
}