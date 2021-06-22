//To print a given pattern
#include<stdio.h>
int main()
{
	char ch;
	int i,j,n;
	printf("Enter a character:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(ch);
		}
		printf("\n");
	}
	ch++;
}
