#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.size();
    vector<int> last(7,0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // cout<<endl<<v.capacity();
    // cout<<endl<<"Element at index 2 "<<v.at(2);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int j:last)
    {
        cout<<j<<" ";
    }
    // cout<<last.front();
    cout<<endl<<v.front()<<endl;
    cout<<v.back()<<endl;
}