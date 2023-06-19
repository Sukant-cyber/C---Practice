#include<iostream>
using namespace std;
int main()
{
    char s;
    cout<<"Enter the character: ";
    cin>>s;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j==1||j==4||i==1||i==6){
                cout<<s;
                }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}