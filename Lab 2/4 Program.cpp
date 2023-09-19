#include<stdio.h>
float a,b;
int main()
{
	printf("enter the basic salary");
	scanf("%f",&a);
	b=(a+0.16*a+0.48*a+0.8*a);
	printf("the salary is %f",b);
	
}
