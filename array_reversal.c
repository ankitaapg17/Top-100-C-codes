//Array reversal
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[100],arr2[100],i;
    scanf("%d", &num);
    
    for(i = 0; i < num; i++)
	{
        scanf("%d", arr[i]);
    }
    
    for(i=0;i<num;i++)
    {
        arr2[i] = arr[num-i];
    }
    for(i = 0; i < num; i++)
    {
	
        printf("%d ", arr2[i]);
    }
    return 0;
}
