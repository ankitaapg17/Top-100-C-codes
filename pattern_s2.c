//To print star pattern
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	


}

