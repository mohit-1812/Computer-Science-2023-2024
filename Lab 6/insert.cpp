#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	char ch,temp,temp1;
	int count=0;
	char a[100];
	printf("enter you string");
	scanf("%[^\n]s",a);
	fflush(stdin);
	printf("enter the character");
	scanf("%c",&ch);
	printf("enter the position to be insterted");
	scanf("%d",&n);
	
	for(i=n-1;a[i]!='\0';i++)
	{
		if(i==n-1)
		{
		temp=a[i];
		a[i]=ch;
		}
		
		
	 
		
		
		else
		{
			
		temp1=a[i];
			
	    a[i]=temp;
		temp=temp1;
		}
		
	

}
printf("%s ",a);}
	
	
	
	
	
