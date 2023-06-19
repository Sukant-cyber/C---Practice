#include<iostream>
using namespace std;
int main()
{
    int a,b,c,num=9;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    
    while(num!=0)
    {
        cout<<"Enter ur choice:\n1->addition"<<endl<<"2->substraction"<<endl<<"3->Multiplication"<<endl<<"4->Division"<<endl<<"0-> Exit\n";
        cin>>num;
        switch(num)
        {
            case 1:
                cout<<a+b<<endl;
                break;
            case 2:
                cout<<a-b<<endl;
                break;
            case 3:
                cout<<a*b<<endl;
                break;
            case 4:
                cout<<a/b<<endl;
                break;
            case 0:
                cout<<"Thanks for visit!"<<endl;
                break;
            default:
                cout<<"Invalid Choice!!"<<endl;
                break;
        }
    }
}