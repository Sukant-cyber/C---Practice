#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>=0){
        cout<<"Incorrect input! Enter the number: ";
        cin>>n;
        cout<<endl;
    }
    cout<<"Success! ";
    
}