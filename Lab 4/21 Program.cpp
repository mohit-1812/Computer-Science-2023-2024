#include<stdio.h>
int n,i,j;
int main()

{
	printf("enter the lenght of first half");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",i+3);
			
		}
		printf("\n");
    }
		
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d ",n+2-i);
			
		}
		printf("\n");
			
		
		
	}
}
