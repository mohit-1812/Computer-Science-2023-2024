#include<stdio.h>
int i,n,j,k;
int main()
{
	printf("enter the lenght");
	scanf("%d",&n);
	for (i=0,k=0;i<n;i++)
	{
		for (j=0;j<i+1;j++,k++)
		{
			printf("%d ",k+1);
		}
	
	printf("\n");
    }
	
}
