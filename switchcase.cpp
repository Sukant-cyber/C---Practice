#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch( n )
    {
        case 1: cout<<"One"<<endl;
                break;
        case 2: switch(n)
                {
                    case 2: cout<<"This is a nested switch case";
                }
                break;
        default: cout<<"This is a default case!!"<<endl;

    }
}