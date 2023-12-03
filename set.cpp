#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(0);
    s.insert(1);
    // for(int i:s)
    // {
    //     cout<<i<<endl;
    // }
    set<int> :: iterator it=s.begin();
    // it++;
    // it++;
    // s.erase(it,s.end());
    s.insert(0);
    s.insert(0);
    // for(int i:s)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<s.count(0);                   // No elements are repeated inside a set so it would return either 0 or 1
    set<int> :: iterator itr=s.end();
    for(auto i=it; i!=itr;i++)
    {
        cout<<*i<<" ";
    }
}