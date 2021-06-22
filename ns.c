#include <stdio.h>

int main()
{
    int sum = 0, n;
    printf("enter the first N natural number\n");
    
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    
    printf("sum is %d",sum);

    return 0;
}
