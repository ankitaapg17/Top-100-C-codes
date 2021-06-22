//Compare two strings using and without using function
#include <stdio.h>
int main()
{
	char a[100]="abcd",b[100]="abcd",X;
	int i;
	printf("\nX:");
	scanf("%c",&X);
	switch(X)
	{
		case 'Y':
			printf("Result =%d\n",strcmp(a,b));
		    break;
		case 'N':
			i=0;
			while(a[i]==b[i]&&a[i]!='\0')
			{
				++i;
				if(a[i]>b[i])
				{
					printf("a>b");
				}
				else if(b[i]>a[i])
				{
					printf("b>a");
				}
				else if(a[i]==b[i])
				{
					printf("a=b");
				}
			}
		default:
		printf("Error");	
			//check
	}
	
	
	
	
	
}








