#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
float df(float);
void main()
{
	int itr,maxitr;
	float x0,x1,h,err;
	clrscr();
	printf("\nEnter the value for:\n");
	printf("x0:\t");
	scanf("%f",&x0);
	printf("\nerr:\t");
	scanf("%f",&err);
	printf("\nmaxitr:\t");
	scanf("%d",&maxitr);
	itr=1;
	Begin:
	h=f(x0)/df(x0);
	x1=x0-h;
	printf("\n\nitr:\t%d",itr);
	printf("\nx1:\t%f",x1);
	if(fabs(h)<err)
	{
		printf("\n\nitr:\t%d",itr);
		printf("\nx1:\t%f",x1);
	}
	else
	{
		x0=x1;
		itr++;
		if(itr<=maxitr)
			goto Begin;
		else
			printf("\n\nThe number of iterations is not sufficient!\n");
	}
	getch();
}
float f(float x)
{
	return (x*exp(x))-1;
}
float df(float x)
{
	return (x*exp(x))+exp(x);
}