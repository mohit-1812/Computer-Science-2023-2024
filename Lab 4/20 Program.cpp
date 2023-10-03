#include<stdio.h>
int n,i,j,k;
int main()

{
	printf("enter lenght");
	scanf("%d",&n);
	for (i=0,k=0;i<n;i++)
	{
		for(j=0;j<n-i;j++,k++)
		{
			printf("%d ",k+1);
			
		}
		printf("\n");
		
		
		
	}
	return 0;
}
