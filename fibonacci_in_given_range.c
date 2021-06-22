#include<stdio.h>
int main()
{
    //To initialize variables 
    int n1=0,n2=1,n3,limit,i;
    //To take user input
    printf("enter a limit of series \n");
    scanf( "%d",&limit);
    printf("Fibonacci series %d %d ",n1,n2);
    //To use this loop for given length
    for(i=2;i<limit;i++)
    {
        //n1 and n2 sum  store in new variable n3
        n3=n1+n2;   
        n1=n2;
        n2=n3;
        //display serious 
        printf("%d ",n3);
    }
    return 0;
}
