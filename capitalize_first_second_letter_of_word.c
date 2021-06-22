//Capitalize the first and last character of each word of string
#include <stdio.h>
#include <string.h>

int main()
{
	//Initialising variables
	char str[100];
	int i,length=0;
	
	//Accepting inputs
	printf("Enter a string:\n");
	gets(str);
	
	//Calculating length
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		if(i==0||i==(length-1)) //Converting first and last index to caps
		{
			str[i]=toupper(str[i]);
		}
		else if(str[i]==' ')//Before and After space
		{
			str[i-1]=toupper(str[i-1]);
			str[i+1]=toupper(str[i+1]);
		}
	}
	printf("String after caps:%s",str);
}






