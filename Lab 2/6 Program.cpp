#include<stdio.h>
int a,b,c;
int main()
{
	printf("enter three points");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		printf("the maximum point is %d",a);
		
	}
	else if (b>c && b>a)
	{
		printf("the maximum point is %d",b);
		
	}
    else 
    {
    	printf("the maximum point is %d",c);
    	
	}
}
