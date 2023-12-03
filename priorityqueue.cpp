#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // Max heap
    priority_queue<int> maxi;
    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(4);
    // maxi.push(2);
    // // cout<<"Size -> "<<maxi.size()<<endl;
    // int n=maxi.size();
    // for(int i=0;i<n;i++)
    // {
    //     cout<<"Size -> "<<maxi.size()<<endl;
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // cout<<endl<<"Final: "<<maxi.size();



    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);
    // cout<<"Size -> "<<maxi.size()<<endl;
    int n=mini.size();
    for(int i=0;i<n;i++)
    {
        cout<<"Size -> "<<mini.size()<<endl;
        cout<<mini.top()<<" ";
        mini.pop();
    }
}