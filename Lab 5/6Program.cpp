#include<stdio.h>
int main()
{
	int n,i,j,k;
	
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
     for (k=0,i=0;i<n;i++)
    {
    	for (j=i+1;j<n;j++)
    	{
    		if (a[i]==a[j])
    		{
    			k=k+1;
    			a[j]=-1;
    			if (k==1)
    			printf("%d",a[i]);
    			
			}
    		
		}
	}
}
