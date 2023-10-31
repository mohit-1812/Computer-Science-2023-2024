#include<stdio.h>
int main()
{
	int n,i,j,temp;
	
	
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}

    for (j=0;j<(n+1)/2;j++)
    {
    	temp=a[j];
    	a[j]=a[n-1-j];
    	a[n-1-j]=temp;
}
    printf("the reverse is \n");
    for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
	

