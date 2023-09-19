#include<stdio.h>
int a,b;
int main()
{
	printf("enter the  number of units");
	scanf("%d",&a);
	if (a>=100)
	{
		b=a*20;
		printf("the amount of your bill is %d",b);
		
		
	}
	else if (a>=50)
	{
		b=a*10;
		printf("the amount of your bill is %d",b);
		
	}
	else
	{
		b=a*5;
		printf("the amount of your bill is %d",b);
	}
}
