#include<stdio.h>
int d,m,y,nd,nm,ny;
int main()
{
	printf("enter you dd mm yyyy");
	scanf("%d%d%d",&d,&m,&y);
	if (d==31 && (m==4 || m==6 || m==9 || m==11))
	{
		nd=1;
		nm=m+1;
		ny=y;
		
	}
	else if (d==31 && m==12)
	{
		nd=1;
		nm=1;
		ny=y+1;
	}
	else if (d==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10))
	{
		nd=1;
		nm=m+1;
		ny=y;
		
	}
	else if (d==28 && ((y%100!=0 || y%400==0) && y%4==0) && m==2)
	{
		nd=29;
		nm=2;
	
	    ny=y;
	}
	else if (d==29 && m==2)
	{
		nd=1;
		nm=3;
		ny=y;
		
	}
    else if (d==28 && m==2)
    {
    	nd=1;
    	nm=3;
    	ny=y;
    	
	}
	else
	{
		nd=d+1;
		nm=m;
		ny=y;
	}
	printf("the next date is %d %d %d",nd,nm,ny);
	
}
