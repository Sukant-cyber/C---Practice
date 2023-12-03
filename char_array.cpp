#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter ur name: ";
    cin>>name;
    // name[2]='\0';
    // cout<<"Your name is: ";
    // cout<<name<<endl;
    int count=0;
    while(name[count]!='\0')
    {
        count++;
    }
    cout<<"Length"<<count;
}