//Declare an array player and wap to read the information about all the players and print the name of the 
//player having highest batting average
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct cricket
{
	int baverage[50];
	char tname[50];
	char pname[50];
};

int main()
{
	int i,max,c,arr[30];
	char b;
	struct cricket a;
	strcpy(a.tname,"INDIA");
	printf("The name of team is:");
	printf("%s",a.tname);
	for(i=1;i<=2;i++)
	{
		printf("\n\n Enter the name of player%d:",i);
		scanf("%s",&b);
		strcpy(a.pname,"b");
		printf("Enter the batting average of the player%d:",i);
		scanf("%d",&a.baverage[i]);
		arr[i]=a.baverage[i];
	}
	max=arr[1];
	for(i=1;i<=2;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("\n\n Maximum batting average is:%d\t",max);
	
}


