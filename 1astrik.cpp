#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=3;i>=0;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=i;k<=3;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
