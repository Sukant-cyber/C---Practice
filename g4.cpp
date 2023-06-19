#include<stdio.h>
int main()
{
	int i,j,k,row,col,n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	int count = 1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
