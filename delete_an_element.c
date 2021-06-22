//To delete a given element from an array
int main()
{
	int i,a[10],min,pos,n,j,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the position:");
	scanf("%d",&pos);
	
	for(i=pos;i<=n-1;i++)
	{
		a[i-1]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//check
	printf("The array is:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
