#include<stdio.h>
int n,s,i,j;
int main()

{
	printf("enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			printf(" ");
			
		}
		for (j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");
		
		
		
	}
}
