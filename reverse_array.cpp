#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    v.push_back(7);
    // for(int i=v.size()-1;i>=0;i--)
    // {
    //     cout<<v.back()<<endl;
    //     v.pop_back();
    // }
    int s=0, e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}