#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int num=5;
    // cout<<num<<endl;
    // cout<<"Address of the variable is:"<<&num;
    // int *ptr=&num;
    // cout<<endl<<"Addresss of num is: "<<ptr<<endl;
    // cout<<"Value is: "<<*ptr<<endl;
    // cout<<"Address of ptr is: "<<&ptr<<endl;
    double d=5.165;
    double *ptr = 0;
    ptr = &d;
    int num=5;
    int *p=&num;
    /*cout<<"Address is: "<<ptr;
    cout<<endl<<"Value is: "<<*ptr;
    cout<<endl<<"Address of pointer is: "<<&ptr;
    cout<<endl<<"Size of the pointer is: "<<sizeof(ptr);*/
    cout<<sizeof(p)<<endl;
    cout<<sizeof(num)<<endl;

    // int num=5;//
    int a=num;
    a++;
    cout<<num<<endl;

    int *ptr2=&num;
    (*ptr2)++;
    cout<<num<<endl;
    cout<<*ptr2<<endl;

    cout<<"----------------"<<endl;

    int *q=ptr2;
    cout<<ptr2<<"-"<<q<<endl;
    cout<<*ptr2<<"-"<<*q<<endl;
    cout<<&ptr2<<"-"<<&q<<endl;

    cout<<"Before addition we have: "<<ptr2<<endl;
    ptr2=ptr2+1;
    cout<<"After addition we have: "<<ptr2;//increase by 4 bytes

}