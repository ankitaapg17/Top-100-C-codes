#include<stdio.h>
int main()
{
	int i,f=1,x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the power:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		f=f*x;
	}
	printf("The result:%d",f);
	
}
