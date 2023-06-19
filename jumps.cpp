#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=40000;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(pocketmoney<3000)
        {
            cout<<"Cannot go out this month from day "<<i<<"!"<<endl;
            cout<<"Remaining balance is "<<pocketmoney<<endl;
            break;
        }
        cout<<"Go Out Today on day "<<i<<"!"<<endl;
        pocketmoney=pocketmoney-3000;
    }
}