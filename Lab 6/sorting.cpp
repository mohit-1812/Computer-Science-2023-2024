#include<stdio.h>
#include<string.h>


int main()
{
	int i,n,j;
	char temp;

	
	char a[100];
	printf("enter your string");
	scanf("%[^\n]s",a);
	n=strlen(a);
	for(i=0;i<n-1; i++)
	{
		for(j=0;j<n-j-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
	printf("%s",a);
}
