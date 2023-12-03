#include<bits/stdc++.h>
using namespace std;
void rev(string& s, int i)
{
    if(i<0)
    {
        return;
    }
    cout<<s[i];
    rev(s, --i);
}
int main()
{
    string s;
    cin>>s;
    int i=s.length()-1;
    rev(s, i);
}