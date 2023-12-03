#include<bits/stdc++.h>
using namespace std;
int fact(int n, int m)
{
    int fact = 1;
    while(n>1)
    {
        fact = (1LL * fact * (n%m))%m; 
        n--;
    }
    return fact;
}
int main()
{
    int n,m;
    cout << "Enter the number: ";
    cin >> n >> m;
    cout << fact(n,m);
}