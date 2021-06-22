//Swapping using pointer
#include <stdio.h>
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	int a,b;
	printf("a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swapping, a is %d and b is %d",a,b);
}







