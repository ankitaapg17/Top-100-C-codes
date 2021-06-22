#include<stdio.h>
int main()
{
	int x;
	printf("Enter the year:");
	scanf("%d",&x);
	if(x%100==0 && x%400==0)
	{
		printf("Leap year");
	}
	else if(x%100!=0 && x%4==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a leap year");
	}
}
	
