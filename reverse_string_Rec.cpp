#include<bits/stdc++.h>
using namespace std;
// Pass by reference krna hoga
void rev(string& s, int start, int end)
{
    if(start>=end)
    {
        return;
    }
    
    swap(s[start], s[end]);
    // start++;
    // end--;
    rev(s, start+1, end-1);
    // cout<<s;

}
int main()
{
    string s;
    cin>>s;
    int start=0;
    int end=s.length()-1;
    rev(s, start, end);
    cout<<s;
}