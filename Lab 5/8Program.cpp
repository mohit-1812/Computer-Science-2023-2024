#include<stdio.h>
int main()
{
	int n,i,j,count;
	count=0;
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the term ");
	scanf("%d",&j);
	for (i=0;i<n;i++)
	{
		if (a[i]==j)
		{
			++count;
			
		}
		
	}
	printf("the number %d is present %d times",j,count);
	return 0;
}
