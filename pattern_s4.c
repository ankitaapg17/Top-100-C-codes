//To print a number pattern
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
