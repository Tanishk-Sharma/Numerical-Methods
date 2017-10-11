/*
Program to  perform the Gauss-Siedel Method.
Date: 23/08/2017
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,itr,n,maxitr;
	float a[10][10],x[10],sum;
	clrscr();
	printf("\nNumber of unknowns: ");
	scanf("%d",&n);
	printf("\nNumber of iterations: ");
	scanf("%d",&maxitr);
	printf("\nEnter the augmented matrix (row-wise):\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	for(i=1;i<=n;i++)
		x[i]=0;
	for(itr=1;itr<=maxitr;itr++)
	{
		for(i=1;i<=n;i++)
		{
			sum=0;
			for(j=1;j<=n;j++)
				if(j!=i)
					sum=sum+a[i][j]*x[j];
			x[i]=(a[i][n+1]-sum)/a[i][i];
		}
		printf("\nNo. of iteration: %d",itr);
		for(i=1;i<=n;i++)
			printf("\n%f",x[i]);
	}
	getch();
}