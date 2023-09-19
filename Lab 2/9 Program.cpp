#include<stdio.h>
int a;
int main()
{
	printf("eneter your number ");
	scanf("%d",&a);
	switch (a)
	{
		case 1 : printf("Monday");
		break;
		case 2 : printf("Tuesday");
		break;
		case 3 : printf("Wednesday");
		break;
		case 4 : printf("thursday");
		break;
		case 5 : printf("Friday");
		break;
		case 6 : printf("Saturday");
		break;
		case 7 : printf("Sunday");
		break;
		default : printf("invalid input");
	}
}
