#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	float a[10][10],x[10],t,sum;
	clrscr();
	printf("\nEnter n: ");
	scanf("%d",&n);
	printf("\nEnter the Augmented matrix:(row-wise)\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	for(j=1;j<=n-1;j++)
	{
		for(i=j+1;i<=n;i++)
		{
			t=a[i][j]/a[j][j];
			for(k=1;k<=n+1;k++)
				a[i][k]=a[i][k]-t*a[j][k];
		}
	}
	printf("\nMatrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			printf(" %f ",a[i][j]);
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		sum=0;
		for(j=i+1;j<=n;j++)
			sum=sum+a[i][j]*x[j];
		x[i]=(a[i][n+1]-sum)/a[i][i];
	}
	for(i=1;i<=n;i++)
		printf("\n%f",x[i]);
	getch();
}