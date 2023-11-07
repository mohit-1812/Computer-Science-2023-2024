#include<stdio.h>
int main()
{
	int i,j;
	int count=0;
	char a[100];
	printf("enter you string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);

	
	char b[i+1];
	for(j=0;j<i;j++)
	b[j]=a[i-j-1];
	
	for(j=0;j<i;j++)
	{
		if(a[j]==b[j])
		count++;
	}
	if (count==i)
	printf("palindrome");
	else
	printf("not palindrome");
}

