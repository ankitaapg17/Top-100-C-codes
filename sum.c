#include <stdio.h>

int main()
{
	int a,b,c;
	int sum;
	float average=0.0;
	
	scanf("%d,%d,%d",&a,&b,&c);
	sum = a+b+c;
	average=sum/2;
	printf("sum = %d\n",sum);
	printf("average = %f\n",average);
	
}
