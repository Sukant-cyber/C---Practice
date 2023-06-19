#include<iostream>
using namespace std;
int main()
{
    float a=45.54;
    cout<<"The value of a is: "<<int(a)<<endl;
    float &y=a;
    cout<<"The value of y is: "<<y;
} 