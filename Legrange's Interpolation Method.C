void main()
{
	int i,j ,n;
	float x[10],y[10],xp,yp,LF,sum;
	clrscr();
	printf("\nEnter no. of discrete data points: ");
	scanf("%d",&n);
	printf("\nEnter:\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d] = ",i);
		scanf("%f",&x[i]);
		printf("\ty[%d] = ",i);
		scanf("%f",&y[i]);
		printf("\n");
	}
	printf("\nEnter x: ");
	scanf("%f",&xp);
	sum=0.0;
	for(i=0;i<n;i++)
	{
		LF=1.0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
				LF=((xp-x[j])/(x[i]-x[j]))*LF;
		}
		sum=sum+LF*y[i];
	}
	yp=sum;
	printf("\ny(x) = %f",yp);
	getch();
}