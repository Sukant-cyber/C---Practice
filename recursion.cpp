#include<bits/stdc++.h>
using namespace std;

void makeRoute(int start, int dest)
{
    // cout<<start<<endl;
    
    if(start == dest)
    {
        cout<<"Reached Destination!!"<<endl;
        return;
    }
    cout<<"Source"<<" "<<start<<" "<<"Destination"<<" "<<dest<<endl;
    makeRoute(start+1, dest);
}

int main()
{
    int start = 0;
    int dest = 10;
    makeRoute(start, dest);
}