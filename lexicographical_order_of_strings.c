//To sort words in lexicographical order (Dictionary order)
//To solve this program, a two-dimensional string named str is created. This string can hold a max of 5 strings
// and each string can have a maximum of 50 characters (including the null character)
#include <stdio.h>
#include <string.h>
void main()
{
	int i,j;
	char str[5][50],temp[50];
	printf("Enter 5 words: ");
	//Getting strings input
	for(i=0;i<5;++i)
	{
		printf("Word-%d:",i+1);
		scanf("%s",str[i]);
	}
	//storing strings in the lexicographical order
	for(i=0;i<5;++i)
	{
		for(j=i+1;j<5;++j)
		{
			//swapping strings if they are not in the lexicographical order
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	
	printf("\nIn the lexicographical order: \n");
	for(i=0;i<5;++i)
	{
		puts(str[i]);
	}
}








