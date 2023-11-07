#include<stdio.h>
int main()
{
	int i;
	int count=0;
	char a[100];
	printf("enter you string");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U' )
	printf("%c ",a[i]);
	count++;
    }
    if(count==0)
    printf("no vowels");
	
	
	
}
