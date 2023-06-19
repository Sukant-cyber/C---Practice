#include<stdio.h>
int main()
{
	int i,j,k,x;
	printf("Enter the number of lines: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=x-i;j>=0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
