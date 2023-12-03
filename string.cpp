#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    // char name[20];
    
    // cin>>s;
    // cout<<s;
    cin>>name;
    // name[2]='\0';
    cout<<name<<endl;
    int i=0,count=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<count<<endl;
    int s=0, e=name.length()-1;
    // while(s<e)
    // {
    //     swap(name[s],name[e]);
    //     s++;
    //     e--;
    // }
    // cout<<name;
    // for(int i=0,j=name.length()-1;i<j/2;i++,j--)
    // {
    //     swap(name[i],name[j]);

    // }
    reverse(name.begin(),name.end());
    
}