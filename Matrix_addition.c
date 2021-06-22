//Matrix addition
#include<stdio.h>
#define row 10
#define col 10
int main()
{
	int row1,col1;
	int row2,col2,i,j;
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
			printf("Input value for:%d %d",i+1,j+1);
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("\n Input the row of matrix2");
	scanf("%d",&row2);
	printf("\n Input the column of the matrix2");
	scanf("%d",&col2);
	printf("\n Input data for matrix2");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("Input value for: %d %d:",i+1,j+1);
			scanf("%f",&mat2[i][j]);
		}
	}
	if((row1==row2)&&(col1==col2))
	{
		printf("\n Addition is possible and the result is:");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			mat_res[i][j]=mat1[i][j]+mat2[i][j];
		}
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%f",mat_res[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("\n Addition is not possible");		
		
		
		
	}
	
	
	









