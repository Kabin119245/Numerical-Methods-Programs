//NEWTON's INTERPOLATION
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter the total number of data \n");
	scanf("%d",&n);
	float x[n],a[n][n],xp,p,l[n];
	printf("Enter the values of Xs and Y=F(x)s \n");
	for(i=0 ; i<n ; i=i+1)
	{
		printf("x[%d] : ",(i+1));
		scanf("%f",&x[i]);
		printf("f[%d] : ",(i+1));
		scanf("%f",&a[0][i]);	
	}
    printf("Enter the interpolation value \n");
	scanf("%f",&xp);
	for(i=1 ; i<n ; i=i+1)
	{
		for(j=0 ; j<n-i ; j=j+1)
		{
			a[i][j]=(a[i-1][j+1]-a[i-1][j])/(x[i+j]-x[j]);
		}
	}
	p=a[0][0];
	for(i=1 ; i<n ; i=i+1)
	{
		l[i]=1;
		for(j=0 ; j<i ; j=j+1)
		{
			l[i]=l[i]*(xp-x[j]);
		}
		p=p+a[i][0]*l[i];
	}
	printf("Hence the answer is %f \n",p);
	getch();
}