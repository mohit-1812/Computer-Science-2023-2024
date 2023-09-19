#include<stdio.h>
int i,j,b,n;


int main()
{
	printf("enter the number");
	scanf("%d",&n);
	j=0;
	b=n;
    while(n!=0)
    {
    	i=n%10;
    	j=j*10+i;
    	n=n/10;
	}
	printf("the reverse of  %d is %d",b,j);
	
}
