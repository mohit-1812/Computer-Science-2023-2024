#include<stdio.h>
int a,b,c;
int main()
{
	printf("enter the value of three sides ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a)
	{
		printf("the triangle is equilateral");
		
	}
	else if (b==a || b==c || a==c )
	{
		printf("the given triangle is isosceles");
		
	}
	else 
	{
		printf("the given triangle is scalene");
		
	}
	
}
	
