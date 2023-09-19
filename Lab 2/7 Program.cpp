#include<stdio.h>
float a,b,c,d,e,f;
int main()
{
	printf("eneter the marks of 5 subjects");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f = (a+b+c+d+e)/5;
	printf("the percentage secured is %f%%",f);
	if (f>=90)
	
	{
		printf("grade A");
		
    }
    else if (f>=80)
    {
    	printf("grade B");
	}
	else if (f>=70)
    {
    	printf("grade C");
	}
	else if (f>=60)
    {
    	printf("grade D");
	}
	else if (f>=40)
    {
    	printf("grade E");
	}
	else
    {
    	printf("grade F");
	}

	
}
