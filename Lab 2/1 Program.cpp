#include<stdio.h>
int a,b,c;
int main()
{
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		printf("the greatest number is %d",a);
		
	}
	else if (b>c && b>a)
	{
		printf("the greatest number is %d",b);
		
	}
    else 
    {
    	printf("the greatest number is %d",c);
    	
	}
}

