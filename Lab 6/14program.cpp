#include<stdio.h>


int main()
{
	int i,count=0,d=0,c=0,space=0;

	
	char a[100];
	printf("enter your string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0'; i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		count++;
		else if(a[i]>=48 && a[i]<=57)
		d++;
		else if(a[i]==' ')
		space++;
		else if((a[i]>=97 && a[i]<=122) || (a[i]>=65 && a[i]<=90) )
		c++;
		else;
		
}
printf("vowels=%d  digits=%d  consonants =%d  space=%d ",count,d,c,space) ;
}
