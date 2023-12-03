#include<bits/stdc++.h>
using namespace std;
string reversedstr(string str, int s, int e)
{
    // char s[] = {'T','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e','\0'};
    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    return str.substr(s,e-s);
}
int main()
{
    string s = "The sky is blue";
    // cout<<s<<endl;

    // strrev(s);
    
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            reversedstr(s, i, j);
            i++;
            j=i+1;
        }
        else{
            i++;
        }
    }
    // reverse(s[1], s[2]);
    cout<<s;
}