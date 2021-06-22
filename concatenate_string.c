//Concatenate one string into another string using switch case
#include <stdio.h>
int main()
{
	char a[100]="This is",b[100]=" amazing",X;
	int i,j;
	printf("\nX:");
	scanf("%c",&X);
	switch(X)
	{
		case 'Y':
			strcat(a,b);
			puts(a);
			break;
		case 'N':
		    for(i=0;a[i]!='\0';i++)
			{
				for(j=0;b[j]!='\0';j++)
				{
					a[i]=b[j];
				}
				
				}
				a[i]='\0';
				printf("String after concatenation=%s\n",a);
				break;	
		
	}
	
	//check
	
	
	
}










