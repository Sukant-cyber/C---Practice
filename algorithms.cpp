#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    // cout<<binary_search(v.begin(),v.end(), 7);
    reverse(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    sort(v.begin(),v.end());
        cout<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }
}