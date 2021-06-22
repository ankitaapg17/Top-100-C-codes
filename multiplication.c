//To print the multiplication table of any number
#include<stdio.h>
int main()
{
	int i,n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		f=n*i;
		printf("%d X %d = %d\n",n,i,f);
	}
}
