#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],X;
	int i,length=0;
	printf("Enter the string:");
	gets(a);
	printf("\n X:");
	scanf("%c",&X);
	switch(X)
	{
		case 'Y':
			printf("Length of string=%d\n",strlen(a));
			break;
        case 'N':
        	for(i=0;a[i]!='\0';i++)
        	{
        		length++;
        		
			}
			printf("Length =%d\n",length);
			break;
			
		default:
		 printf("error!!");
		 	
	}
}
