#include<stdio.h>
int main()
{
	int i,k,n;
	char m;
	int count=0;
	char a[100];
	
	printf("enter you string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	char b[i+1];
	
	for(k=0;k<(i+1)/2;k++)
	{
	
	m=a[i-k-1];
	a[i-k-1]=a[k];
	a[k]=m;}
	for (k=0;k<i;k++)
	printf("%s",a[k]);
}
	


