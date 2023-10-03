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
			printf("* ");
			
		}
		printf("\n");
    }
		
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("* ");
			
		}
		printf("\n");
			
		
		
	}
}
