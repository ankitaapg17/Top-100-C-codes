#include<stdio.h>
#include<conio.h>
int main()
{
	float area,peri,r;
	float pie=3.14;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=pie*(r*r);
	peri=2*pie*r;
	printf("Area=%f\n",area);
	printf("Perimeter=%f",peri);
	
}
