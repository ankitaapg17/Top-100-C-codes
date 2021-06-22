#include <stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	float sum=0.0,average=0.0;
	
	printf("Enter three numbers:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	sum=a+b+c;
	average=sum/3;
	printf("sum=%f\n",sum);
	printf("average=%f\n",average);
	
}
