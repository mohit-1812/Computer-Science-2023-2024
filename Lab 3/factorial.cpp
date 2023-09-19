#include<stdio.h>
int j,i,a;
int main()
{
	printf("enter ypur number");
	scanf("%d",&a);
	j=a;
	for (i=a-1;i!=0;i--)
	{
		j=j*i;
	}
	printf("the factorial of %d is %d",a,j);
}
