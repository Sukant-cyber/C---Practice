// #include<bits/stdc++.h>
// using namespace std;
// bool linSearch(int arr[], int size, int key)
// {
//     if(size==0)
//         return false;
//     if(arr[0]==key)
//         return true;
//     return linSearch(arr+1, size-1, key);
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int key = 10;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     if(linSearch(arr, size, key))
//         cout << "Element found!!";
//     else
//         cout << "Element not found!!";
// }

#include<bits/stdc++.h>
using namespace std;
bool linSearch(int arr[], int size, int key)
{
    // bool statues = false;
    if(size == 0)
    {
        return false;
    }
    if(arr[0] == key)
    {
        return true;
    }
    
    linSearch(arr+1, size-1, key);
    
}
int main()
{
    int arr[] = {1,2,3,4,1,6};
    int key = 10;
    int size=sizeof(arr)/sizeof(arr[0]);
    if(linSearch(arr, size, key))
        cout << "Element found!!";
    else
        cout << "Element not found!!";
}