#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,count=0;

	
	char a[100];
	printf("enter you string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';)
	{
		if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e')
		{
			count++;
			i=i+3;
		}
		else
		i++;
	}
	printf("%d",count);
}
