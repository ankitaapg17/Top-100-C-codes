#include<stdio.h>
int main()
{
	
	int choice;
	float c,f;
	printf("Enter your choice(celcius:0/fah:1):");
	scanf("%d",&choice);
	if(choice==0)
	{
	
	printf("Enter the temp in celcius:");
	scanf("%f",&c);
	f=(9*c/5)+32;
	printf("Temp in fahrenheit:%f",f);
	
	}
	else
	{
	printf("Enter the temp in fahrenheit:");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("Temp in celcius:%f",c);
	}
	
}
