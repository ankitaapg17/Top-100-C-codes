#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter two numbers to be swapped:");
	scanf("%d,%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Swapped numbers are:%d,%d",x,y);
	
	
	
}
