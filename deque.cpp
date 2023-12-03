#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>  d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    // d.pop_front();
    d.push_back(3);
    // cout<<endl<<d.size();
    cout<<d.at(0);
    d.erase(d.begin(),d.begin()+1); // erases element in specified range
    cout<<endl<<d.size();

}