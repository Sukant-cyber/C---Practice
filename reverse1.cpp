#include<iostream>
#include <bits/stdc++.h>
// #include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<s;
}