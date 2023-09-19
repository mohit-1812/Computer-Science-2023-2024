#include<stdio.h>
float a,b,c,d;
int main()
{
	printf("enter the value in kilometer");
	scanf("%f",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("the value in meter is %f \n",b);
	printf("the value in centimeter is %f \n",c);
	printf("the value in millimeter is %f \n",d);
	return 0;
	
}
