//To interchange any two rows and columns in the given matrix
#include<stdio.h>
void main()
{
	int a1[10][10],a2[10][10];
	int i,j,m,n,a,b,c,p,q,r;
	printf("Enter the order of the matrix\n");
	scanf("%d %d",&m,&n);
	printf("Enter the coefficients of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a1[i][j]);
			a2[i][j]=a1[i][j];
		}
	}
	printf("Enter the numbers of two rows to be exchanged\n");
	scanf("%d %d",&a,&b);
	for(i=0;i<m;i++)
	{
		c=a1[a-1][i];
		a1[a-1][i]=a1[b-1][i];
		a1[b-1][i]=c;
	}
	printf("Enter the numbers of two columns to be exchanged\n");
	scanf("%d %d",&p,&q);
	printf("The given matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		r=a2[i][p-1];
		a2[i][p-1]=a2[i][q-1];
		a2[i][q-1]=r;
	}
	printf("The matrix after interchanging the two rows:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a1[i][j]);
		}
		printf("\n");
	}
	printf("The matrix after interchanging the two columns\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a2[i][j]);
		}
		printf("\n");
	}
	
	
}



