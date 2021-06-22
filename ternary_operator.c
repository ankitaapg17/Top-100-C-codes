//Find the largest of three numbers using ternary operators
#include <stdio.h>
void main()
{
	int a,b,c,big;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n The biggest number is :%d",big);
	
}





