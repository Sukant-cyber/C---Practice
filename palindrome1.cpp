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
//        else if(c[i]==" ")
//        {
//        	c.erase(c.begin()+i);
//        	i--;
//		}
    }
    cout<<c<<endl;
    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == ' ')
        {
            //using in-built function to erase element
            c.erase(c.begin() + i);
            i--;
        }
    }
    cout << c<<endl;
//    cout<<c<<endl;
    int s=0,e=c.length()-1;
    while(s<e)
    {
        if(c[s]!=c[e])
        {
            cout<<"Not a palindrome!!";
            break;
        }
        s++;
        e--;
    }
    if(s>=e)
    {
        cout<<"Palindrome!!";
    }
}
