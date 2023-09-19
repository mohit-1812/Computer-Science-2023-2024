#include<stdio.h>
int j,i,a;
int main()
{
	printf("enter your  number");
	scanf("%d",&a);
	for (i=1;i<11;i++)
	{
		j=a*i;
		printf("%d*%d = %d \n",a,i,j);
		
	}
}
