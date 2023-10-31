#include<stdio.h>
int main()
{
	int n,i,j,temp,k;
	
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	printf("enter the value of k \n");
	scanf("%d",&k);
	printf("the %dth smallest number is %d \n",k,a[k-1]);
	printf("the %dth largest number is %d \n",k,a[n-k]);
	
	return 0;
}
