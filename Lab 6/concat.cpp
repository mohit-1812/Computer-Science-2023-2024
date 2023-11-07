#include<stdio.h>
int main()
{
	int i,j,k;
	int count=0;
	char a[100];
	char b[100];
	char c[100];
	
	printf("enter you string");
	scanf("%s",&a);
	printf("enter you string");
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++)
	c[i]=a[i];
	for(j=0;b[j]!='\0';j++,i++)
	c[i]=b[j];
	for(k=0;k<i;k++)
	printf("%c",c[k]);
}
	
	
	
