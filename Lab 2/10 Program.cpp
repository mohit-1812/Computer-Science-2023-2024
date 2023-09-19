#include<stdio.h>
int a,b;



int main()
{
	printf("enter the month and year");
	scanf("%d%d",&a,&b);
	if ((a==1 || a==3 ) || (a==5 ||a==7))
	{
		printf("the number of days are 31");
		
	
	}
    else if ((a==8 || a==10)|| a==12)
    {
    	printf("the number of days are 31");
    	
	}
    else if (a==2 && (b%4==0 && (b%100!=0 || b%400==0) ))
    {
    	printf("the number of days is 29");
    	
	}
	else if (a==2)
	{
		printf("the number of days is 28");
		
	}
	else 
	{
		printf("the number of days is 28");
	}
}
