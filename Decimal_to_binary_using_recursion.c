//Problems on recursion


//To convert decimal to binary using recursion

#include <stdio.h>

long convertBinary(int decNo)
{
	static long biNo,rem,factor=1;
	if(decNo !=0)
	{
		rem = decNo % 2;
		biNo = biNo + rem*factor;
		factor=factor*10;
		convertBinary(decNo/2);
	}
	return biNo;
	
	
}

int main()
{
	long biNo;
	int decNo;
	
	printf("Enter any decimal number:");
	scanf("%d",&decNo);
	
	biNo = convertBinary(decNo);
	printf("The Binary value of decimal no. %d is: %ld",decNo,biNo);
	
}











