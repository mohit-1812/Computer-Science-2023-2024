#include<stdio.h>
int main()
{
	int n,i,j,temp;
	
	
	printf("enter the value of even number n");
	scanf("%d",&n);
	int a[n];
	printf("enetr the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (j=0;j<n-1;j=j+2)
	{
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
		
	}
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
