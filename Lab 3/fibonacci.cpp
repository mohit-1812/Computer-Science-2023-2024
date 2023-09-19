#include<stdio.h>
int i,j,b,a,n;


int main()
{
	a=0;
	b=1;
	printf("enter the term you want");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		j=a+b;
		a=b;
		b=j;
	}
	printf("the value o %dth term is %d",n,j);
}
