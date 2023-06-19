// #include<iostream>
// using namespace std;
// int main()
// {
//     int amount;
//     cout<<"Enter the amount u have: ";
//     cin>>amount;
//     if(amount>5000)
//     {
//         cout<<"Go with Neha!"<<endl;
//         if(amount>10000){
//             cout<<"Go for a roadtrip!"<<endl;
//         }
//         else{
//             cout<<"Go for a movie!"<<endl;
//         }
//     }
//     else if(amount>2000)
//     {
//         cout<<"Go with Rashmi!"<<endl;
//     }
//     else
//     {
//         cout<<"Go with Friends!"<<endl;
//     }
// }

// Maximum of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<a<<" is largest! "<<endl;
    }
    else if(b>c)
    {
        cout<<b<<" is largest!"<<endl;
    }
    else
    {
        cout<<c<<" is largest!"<<endl;
    }
    return 0;
}