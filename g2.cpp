#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=n;j>=1;j--){
			for(int k=0;k<n;k++){
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
