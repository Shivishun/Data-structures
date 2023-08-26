#include<stdio.h>
int main()
{
	int arr1[10][10],arr2[10][10],arr3[10][10],i,j,k,n;
	printf("Enter the number of terms in the matrix :");
	scanf("%d",&n);
	printf("Enter the elements in matrix A :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the elements in matrix B :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<n;k++)
			{
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("Multiplied matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
