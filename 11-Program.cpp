#include<stdio.h>
#include<math.h>
int a,b,c;
float f,g;
int main()
{
	printf("enter the value of principle , rate of interest , and number of years");
	scanf("%d%d%d",a,b,c);
	f=(a*b*c)/100;
	g=(pow((1+b/100),c))*a-a;
	printf("the principle interest is %f and compound interest is %f",f,g);
	return 0;
	
}
