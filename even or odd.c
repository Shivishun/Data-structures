#include<stdio.h>
int main()
{
	int arr1[10],i;
	printf("Enter 10 numbers :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);	
	}
	printf("The Even numbers are :\n");
	for(i=0;i<10;i++)
	{
		if(arr1[i]%2==0)
		{
			printf("%d ",arr1[i]);
		}
	}
	printf("\n");
	printf("The odd numbers are :\n");
	for(i=0;i<10;i++)
	{
		if(arr1[i]%2!=0)
		{
			printf("%d ",arr1[i]);
		}
	}
}