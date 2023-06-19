#include<stdio.h>
int main()
{
int n; 
scanf("%d",&n);
//Your code here
for(int i=0;i<n;i++){
    
    for(int j){
        for(int k=n;k>=1;k--){
            printf("%d",j);
        }
    j=j-1;
    }
    printf("\n");
}
}


