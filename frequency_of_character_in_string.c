//To find the frequency of characters in a string
#include <stdio.h>
int main()
{
	int freq=0,i;
	char arr[10],ch;
	printf("Enter the string:");
	gets(arr);
	printf("Enter a character:");
	scanf("%c",&ch);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==ch)
		{
			freq++;
		}
	}
	printf("%d",freq);
}







