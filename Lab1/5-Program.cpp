#include<stdio.h>
int a,b,d,e,f;
int main()
{
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	e=a;
	d=b;
	a=d;
	b=e;
	printf("the values of a is %d and b is %d",a,b);
	return 0;
}
