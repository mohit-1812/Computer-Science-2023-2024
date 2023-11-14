#include<stdio.h>
int main()
{
	int i;
	int count=0;
	char a[100];
	printf("enter you string");
	scanf("%[^\n]s",a);
	if(a[0]<='z' && a[0]>='a')
	a[0]=a[0]-32;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]<='z' && a[i+1]>='a')
			a[i+1]=a[i+1]-32;
			
}
}
printf("%s",a);
return 0;
}

