//Compare two strings
#include <stdio.h>

int compare(char[],char[]);//function prototype declaration

int main()
{
	char aj1[100],aj2[100];
	int cmp;
	printf("Enter first string:\n");
	scanf("%s",aj1);
	printf("Enter second string:\n");
	scanf("%s",aj2);
	
	cmp=compare(aj1,aj2);
	
	if(cmp==1)
	printf("Both the strings are same\n");
	else
	printf("Both strings are different\n");
}

int compare(char k[],char l[])
{
	int i=0,flag=0;
	while(k[i]!='\0' && l[i]!='\0') //until atleast one string ends
	{
		//Even if they differ by a single character don't iterate further
		if(k[i]!=l[i])
		{
			flag=1;
			break;
		}
		i++;	
	}
	//If all the characters are same as well as both strings have ended
	if(flag==0 && k[i]=='\0' && l[i]=='\0')
	return 1;
	else return 0;
	
}





