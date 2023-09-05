#include<iostream>
using namespace std;
int main()
{
    int a=99;
    int* b=&a;                      // Stores the address of a
    cout<<&a<<endl;
    cout<<*b;                       // Stores the value at that particular index

    int** c=&b;
    cout<<endl<<c;
    cout<<endl<<*c;                 // Stores garbage value by default
    return 0;
}