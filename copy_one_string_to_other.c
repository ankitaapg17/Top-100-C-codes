//Copy one string into another string using switch case
#include <stdio.h>
int main()
{
	char a[100]="awesome",b[100],X;
	int i;
	printf("\n X:");
	scanf("%c",&X);
	switch(X)
	{
		case 'Y':
			strcpy(b,a);
			puts(b);
			break;
		//Does indentation matter in C?
		case 'N':
			for(i=0;a[i]!='\0';i++)
			{
				b[i]=a[i];
			}
			b[i]='\0';
			printf("b=%s\n",b);
			break;
		default:
		printf("Error");	
		
	}
	
	
	
	
	
	
	
}









