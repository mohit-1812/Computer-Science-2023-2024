#include<stdio.h>
int a;
int main()
{
	printf("enter the year");
	scanf("%d",&a);
	if (((a%100 != 100 ) || (a%400==0)) && a%4==0)
	{
		printf("the given year is leap year");
		
	}
    else
    {
    	printf("the given year is not a leap year");
    	
	}
}
