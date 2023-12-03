#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // Base Case
    if(n==0)
    {    
        return 1;
    }
    int result=n*fact(n-1);
    return result;
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << fact(n);
}