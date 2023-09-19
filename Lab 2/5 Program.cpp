#include<stdio.h>
int a,b,c;
int main()
{
	printf("enter three numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a)
	{
		printf("the given numbers are equal");
		
	}
	else
	{
		printf("the given numbers are not equal");
	}
}
