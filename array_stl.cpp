#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[4]={1,2,3,4};

    //This array is implemented using the basic array only this is the reason that is not used in the coding purposes rather the basic array is used.
    array<int,4> a={1,2,3,4};
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        // cout<<a[i]<<" ";
        continue;
    } 
    cout<<"Elemnt at index 2 is "<<a.at(2)<<endl;
    cout<<a.empty();

}