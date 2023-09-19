#include<stdio.h>
int a,b,c,d,e;
float f;
int main()
{
	printf("the marks scored in 5 subjects out of 100");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("the percentage secured is %f%%",f);
	return 0;
}
