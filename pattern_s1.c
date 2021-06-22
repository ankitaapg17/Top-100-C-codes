//To print a given pattern
#include<stdio.h>
int main()
{
	char ch='A';
	int i,j,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
		ch++;
	}
	
}
