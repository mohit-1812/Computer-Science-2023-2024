#include<stdio.h>
int main()
{
	int n,i,k,sum;
	sum=0;
	
	
	
	printf("enter the value of n");
	scanf("%d",&n);
	
	int a[n-1];
	printf("enter the values");
	for (i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for (i=0;i<n-1;i++)
	{
		sum=sum+a[i];
	}
	k=(n*(n+1)/2)-sum;
	printf("%d",sum);
	printf("the missing number is %d",k);
}
