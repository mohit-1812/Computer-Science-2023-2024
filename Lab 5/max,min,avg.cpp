#include<stdio.h>
int main()
{
	int n,i,sum,min,max;
	sum=0;
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enetr the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (i=0;i<n;i++)
	{
		
		if (a[i]>=max)
		max = a[i];
	}
	for (i=0;i<n;i++)
	{
		
		if (a[i]<=min)
		min=a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the maximum value is %d",max);
	printf("the minimum value is %d",min);
	printf("the average value is %f",sum/n);
	

}

