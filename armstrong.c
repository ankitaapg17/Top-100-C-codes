#include<stdio.h>

int check(int l);
int main()
{
	int k,n;
    printf("Enter the number:");
	scanf("%d",&n);
	k=check(n);
	if(k==0)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not an armstrong number");
	}
	
}
int check(int l)
{
	int d,num,s=0,c,cube;
	num=l;
	while(num!=0)
	{
		d=num%10;
		cube=d*d*d;
		s=s+cube;
		num=num/10;
	}
	if(s==l)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
	
	
}
