#include<iostream>
using namespace std;
int main()
{
    int n=1;

        switch(n)
        {
            case 1: cout<<"One"<<endl;
            //continue; // no continue statement can be used in the switch statement
            break;
            default:
            cout<<"This is the default case!!"<<endl;
            break;
            
        }
        exit(0);
        // this exit statement quits the infinite loop
    
}