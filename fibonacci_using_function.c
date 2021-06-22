//To generate first N fibonacci numbers using function

#include<stdio.h>
#include<conio.h>

int fibo(int x,int y,int z,int l)
{
	int i;
	for(i=0;i<l-2;i++)
	{
		z=x+y;
		printf("%d\n",z);
		x=y;
		y=z;
	}
}
int main()
{
	int l,a=0,b=1,c;
	printf("\n Enter limit:");
	scanf("%d",&l);
	if(l==1)
	printf("%d",a);
	else if(l==2)
	printf("%d %d",a,b);
	else if(l>2)
	{
		printf("\n %d %d\n",a,b);
		fibo(a,b,c,l);
	}
	
	
	
}

