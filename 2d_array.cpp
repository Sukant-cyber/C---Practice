#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[][3], int target, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
                return m*i+j;
        }
    }
    return -1;
}
int row_sum(int arr[][3], int j,int col)
{
    int count=0;
    for(int i=0;i<col;i++)
    {
        count=count+arr[j][i];
    }
    return count;
}
int col_sum(int arr[][3], int j,int row)
{
    int count=0;
    for(int i=0;i<row;i++)
    {
        count=count+arr[i][j];
    }
    return count;
}
void wave_print(int arr[][3], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[j][i]<<" ";
            }
            // cout<<endl;
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
            // cout<<endl;
        }
    }
}
int main()
{
    /*int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; */
    int arr[3][3]={{1,11,111},{2,22,222},{3,33,333}};
    /*for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int target=54;
    // cout<<"Element found at index: "<<linear_search(arr, target, 3, 3);
    // for(int i=0;i<3;i++)
    // {
    //     cout<<"Sum of Row is: "<<row_sum(arr,i,3)<<endl;
    // }
    // for(int i=0;i<3;i++)
    // {
    //     cout<<"Sum of Row is: "<<col_sum(arr,i,3)<<endl;
    // }
    int larg=INT_MIN;
    // cout<<larg<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Sum of Col is: "<<col_sum(arr,i,3)<<endl;
        if(col_sum(arr,i,3)>larg)
        {
            larg=col_sum(arr,i,3);
        }
    }
    cout<<"Largest sum of columns is: "<<larg<<endl;
    wave_print(arr,3,3);
}