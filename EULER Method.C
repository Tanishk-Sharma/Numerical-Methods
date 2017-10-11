#include<stdio.h>
#include<conio.h>
float f(float,float);
void main(){
	int i,n;
	float x0,xn,x1,y0,y1,h;
	clrscr();
	printf("\nx0 = ");
	scanf("%f",&x0);
	printf("\ny0 = ");
	scanf("%f",&y0);
	printf("\nxn = ");
	scanf("%f",&xn);
	printf("\nNo. of steps = ");
	scanf("%d",&n);
	h = (xn-x0)/n;
	for(i=1;i<=n;i++){
		y1 = y0+h*f(x0,y0);
		x1 = x0+h;
		printf("\nStep No.: %d\ny1 = %f",i,y1);
		y0=y1;
		x0=x1;
	}
	printf("\n\ny1 = %f",y1);
	getch();
}
float f(float x,float y){
	return x+y;
}