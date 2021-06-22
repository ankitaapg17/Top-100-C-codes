//A C-program to remove all characters in a string except alphabet
#include <stdio.h>
#include <string.h>

int main()
{
	char line[100],i,j;
	printf("\nEnter the string: ");
	gets(line);
	for(i=0;line[i]!='\0';++i)
	{
		while(!(line[i]>='a'&&line[i]<='z')&&!(line[i]>='A'&&line[i]<='Z')&&!(line[i]=='\0'))
		{
			for(j=i;line[j]!='\0';++j)
			{
				line[j]=line[j+1];
			}
			line[j]='\0';
		}
	}
	printf("Output string: ");
	puts(line);
}







