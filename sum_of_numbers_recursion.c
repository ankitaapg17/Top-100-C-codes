//Write a recursive function in C to find the summation of 1st N natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
	int number,result;
	printf("Enter a positive integer:");
	scanf("%d",&number);
	result=sum(number);
	printf("sum=%d",result);
}

int sum(int num)
{
	if(num!=0)
	return num+sum(num-1);
	else
	return num;
}











