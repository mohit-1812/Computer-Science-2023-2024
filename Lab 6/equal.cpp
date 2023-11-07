#include<stdio.h>

int main()
{
	int a1,a2,i;
	int count=0;
	
	
	char a[100];
	char b[100];
	printf("enter your string");
	scanf("%s",a);
	printf("enter your string");
	scanf("%s",b);
	for(a1=0;a[a1]!='\0';a1++);
	for(a2=0;a[a2]!='\0';a2++);
	if(a1==a2)
	{
		for(i=0;i<a1;i++)
		if (a[i]==b[i])
		count++;
		if(count==a1)
		printf("equal");
		else 
		printf("not equal");
}
else
printf("not equal");
}
			
	
