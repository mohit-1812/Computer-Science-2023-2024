#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char b;
	int count=0;
	char a[100];
	printf("enter your string");
	scanf("%s",a);
	fflush(stdin);
    printf("enter your character");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]==b)
    	{
    		printf("%d",i);
    		count++;
    		break;
    		
		}
	}
	if(count==0)
	printf("not found");
	}
	
