//To find an element such that it is the minimum element in its row and maximum in its column
#include <stdio.h>
#include <conio.h>
main()
{
	int a[10][10],i,j,k,n,min,max,col,m;
	printf("Enter order m,n of mn matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter elements row-wise\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
				col=j;
			}
		}
		max=a[0][col];
		for(k=0;k<m;k++)
		{
			if(a[k][col]>=max)
			{
				max=a[k][col];
			}
		}
		if(max==min)
		printf("Saddle point at(%d,%d)",i+1,col+1);
		
		
		
	}
}
















