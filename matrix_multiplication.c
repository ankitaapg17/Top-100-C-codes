//matrix multiplication
#include<stdio.h>
#define row 10
#define col 10
int main()
{
	int row1,col1,row2,col2,i,j,k;
	float mat1[row][col],mat2[row][col],mat_res[row][col];
	printf("\n Input the row of the matrix1:");
	scanf("%d",&row1);
	printf("\n Input the col of the matrix1:");
	scanf("%d",&col1);
	printf("\n Input data for matrix1");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("Input value for:%d: %d: ",i+1,j+1);
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("\n Input the row of the matrix2:");
	scanf("%d",&row2);
	printf("\n Input the col of the matrix2:");
	scanf("%d",&col2);
	printf("\n Input data for matrix 2");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("Input value for: %d: %d:",i+1,j+1);
			scanf("%f",&mat2[i][j]);
		}
	}
	if(col1==row2)
	{
		printf("\n Multiplication is possible and the result is as follows:");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				mat_res[i][j]=0;
				for(k=0;k<col1;k++)
				{
					mat_res[i][j]+=mat1[i][k]+mat2[k][j];
				}
			}
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col2;j++)
				{
					printf("%f",mat_res[i][j]);
				}
				printf("\n");
			}
		}
	}
		else
		printf("Multiplication not possible");
	}
	
	
	
	







