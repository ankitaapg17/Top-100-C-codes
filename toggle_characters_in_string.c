//Program to toggle each character in a string
//Input the string, traverse the string, if the scanned character is uppercase, convert it to lowercase
#include <stdio.h>
#define MAX_SIZE 100

void toggleCase(char *str);

int main()
{
	char str[MAX_SIZE];
	printf("\nEnter the string: ");
	scanf("%s",&str);
	toggleCase(str);
	printf("Replaced string after toggling characters: ");
	printf("%s",str);
	
}
void toggleCase(char *str)
{
	while(*str)
	{
		if(*str>='a' && *str<='z')
		{
			*str=*str-32;
		}
		else if(*str>='A' && *str<='Z')
		{
			*str=*str+32;
		}
		str++;
	}
}






