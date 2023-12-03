#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int array[5]={10,5,5,5,2};
    int target=12;
    for(int i=0;i<size;i++)
    {
        if((array[i]+array[i+1]+array[i+2])==target)
        {
            cout<<array[i]<<" "<<array[i+1]<<" "<<array[i+2]<<endl;
        }
    }
}