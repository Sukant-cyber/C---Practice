#include<bits/stdc++.h>
using namespace std;
int& func(int a)
{
    int num = a;
    int& ans=num;
    return ans;
}
void update2(int n)     // Pass by value
{
    n++;
}
void update(int& n)     // Pass by reference
{
    n++;
}
int main()
{
    int n = 5;
    // cout << "Before: " << n <<endl;
    // update(n);
    // cout<< "After: " << n << endl;
    // update2(n);
    // cout<<"Pass by value: "<<n<<endl;
    cout<<func(n);
}