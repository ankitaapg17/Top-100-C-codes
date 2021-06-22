//Check if the number entered is pallindrome
//Get the number, hold it in temporary variable, reverse the number, compare, if same print palindrome
#include <stdio.h>

int main()
{
	int n,r,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("Palindrome number");
	else
	printf("not palindrome");
}








