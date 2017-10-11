/*
Program to simulate Bisection Method.
Date: 26/07/2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float function_val(float);

int main()
{
	float a,b,c,err,temp,fa,fb,fc;
	clrscr();
	printf("\nValue of Permissible error:\t");
	scanf("%f",&err);
	do{
		printf("\n\ta=\t");
		scanf("%f",&a);
		printf("\n\tb=\t");
		scanf("%f",&b);
		fa=function_val(a);
		fb=function_val(b);
		printf("\n\nf(a)= %f\tf(b)=%f\t",fa,fb);
	}while((fa*fb)>0);
	c=0;
	do{
		temp=c;
		c=(a+b)/2.0;
		fa=function_val(a);
		fc=function_val(c);
		if((fa*fc)<0)
			b=c;
		else
			a=c;
	}while(fabs(temp-c)>err);
	printf("\n\nThe root of the equation is:\t%f",c);
	getch();
	return 0;
}
float function_val(float x)
{
	return (pow(x,3)-24);
}