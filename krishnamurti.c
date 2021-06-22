//To print krishnamurti/strong number
#include<stdio.h>
int fact(int m);
int check(int n);


int main()
{
	int i,n,k;
	printf("Enter the number:");
	scanf("%d",&n);
	k=check(n);
	if(k==0)
	{
		printf("%d is krishnamurti number",n);
	}
	else
	{
		printf("Not a krishnamurti number");
	}
}

int check(int num)
{
	int number,d,s=0;
	number=num;
	while(number!=0)
	{
		d=number%10;
		s=s+fact(d);
		number=number/10;
	}
	if(s==num)
	{
		return 0;
	}
	
}

int fact(int d)
{
	int i,f=1;
	for(i=1;i<=d;i++)
	{
		f=f*i;
	}
	return f;
}

