#include<stdio.h>
int main()
{
	int i;
	int count=0;
	char a[100];
	printf("enter you string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	
	printf("%d",i);
}
