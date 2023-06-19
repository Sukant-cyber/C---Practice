#include<stdio.h>
int main()
{
	int i,j,k,x;
	printf("Enter the number of lines: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=x+2;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
}
