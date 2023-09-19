#include<stdio.h>
int j,i,a;
int main()
{
	printf("enter the number");
	scanf("%d",&a);
	i=0;
	for (j=a;j!=0;i++)
	{
		j=j/10;
	}
	printf("the number of digits is %d",i);
}
