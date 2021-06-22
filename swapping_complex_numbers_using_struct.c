//Swapping complex numbers
#include <stdio.h>
struct complex
{
	int r;
	int i;
};
void swap(struct complex *x, struct complex *y)
{
	struct complex c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	struct complex c1,c2;
	printf("Enter two real coefficients:\n");
	scanf("%d %d",&c1.r,&c2.r);
	printf("Enter two imaginary coefficients:\n");
	scanf("%d %d",&c1.i,&c2.i);
	printf("Complex numbers:c1=%d+j%d and c2=%d+j%d",c1.r,c1.i,c2.r,c2.i);
	swap(&c1,&c2);
	printf("\n After swapping, c1=%d+j%d and c2=%d+j%d",c1.r,c1.i,c2.r,c2.i);
}







