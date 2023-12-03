#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1]="Sukant";
    m[13]="Kaushik";
    m[2]="Krishna";
    m.insert({3,"Bheem"});
    m.insert({4,"Arjun"});
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<"Finding 13-> "<<m.count(13);
    // m.erase(m.begin(), m.end());
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    map<int, string> ::iterator it=m.begin();
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<m.count(13);

}