#include<bits/stdc++.h>
using namespace std;
bool palCheck(string s, int start, int end)
{
    if(start>end)
    {
        return true;
    }
    if(s[start]!=s[end])
    {
        return false;
    }
    palCheck(s, ++start, --end);
}
int main()
{
    string s;
    cin>>s;
    int start=0;
    int end=s.length()-1;
    if(palCheck(s, start, end))
    {
        cout<<"YES! Palindrome";
    }
    else{
        cout<<"NO! Not a Palindrome";
    }
}