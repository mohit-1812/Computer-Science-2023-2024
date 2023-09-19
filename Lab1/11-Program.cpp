#include<stdio.h>
#include<math.h>
float s,c,p,r,t;
int main()
{
	printf("enter principle,rate of interest,time period repectively ");
	scanf("%f%f%f",&p,&r,&t);
	s=p*t*r/100;
	c=pow((1+r/100),t)*p;
	printf("simple intereset = %f and compound interest = %f",s,c);
	
}
