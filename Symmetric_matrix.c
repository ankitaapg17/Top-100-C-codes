#include<stdio.h>
#include<conio.h>

int main(void)
{
	int X[10][10],n,i,j,flag;
	printf("How many columns and rows?\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&X[i][j]);
		}
	}
	flag=1;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((X[i][j]-X[j][i]!=0))
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	printf("Symmetric matrix");
	else
	printf("Not a symmetric matrix");
	
	
	
}
