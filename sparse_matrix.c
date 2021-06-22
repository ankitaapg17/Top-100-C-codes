//Write a program to represent a sparse matrix
//Sparse matrix has more zero elements than nonzero elements

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int arr[10][10];
	int i,j,m,n,count=0;
	printf("Order of matrix:\n");
	scanf("%d %d",&m,&n);
	printf("Coefficients of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count>((m*n)/2))
	{
		printf("Given matrix is a sparse matrix");
	}
	else
	printf("Given matrix is not a sparse matrix. It has %d zeroes",count);
	
	
	
}







