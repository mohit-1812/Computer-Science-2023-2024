#include<stdio.h>
#include<math.h>
int a,b,c,e,f,g;
int main()

{
	printf("enter your number");
	scanf("%d",&a);
	c=a;
	
	for (b=0;c!=0;b++)
	{
		c=c/10;
		
		
	}
	e=a%10;
	f=a/(pow(10,(b-1)));
	g=e+f;
	printf("the sum of first and last digit is %d",g);
		
	
}
