#include<stdio.h>
int main()
{
	int n,i,j,temp,m;
	m=0;
	
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
    for (i=0;i<n;i++)
    {
    	for (j=i+1;j<n;j++)
    	{
    		if (a[i]==a[j])
    		{
    			a[j]=-1;
			}
    		
		}
	}
    for (i=0;i<n-1;i++)
    {
    	if (a[i]==-1)
    	{
    		temp=a[i];
    		a[i]=a[i+1];
    		a[i+1]=temp;
    		
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=-1)
		m=m+1;
	}
	n=m;
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);	}}
	


