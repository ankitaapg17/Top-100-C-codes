//Print the pattern 1
//                 1 1
//                1 2 1
//               1 3 3 1
//              1 4 6 4 1
//             1 5 10 10 5 1

#include <stdio.h>
int main()
{
	int r,c=1,s,i,j;
	printf("Enter number of rows:");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(s=1;s<=r-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				c=1;
			}
			else
			{
				c=c*(i-j+1)/j;
			}
			printf("%4d",c);
		}
		printf("\n");
	}
}
