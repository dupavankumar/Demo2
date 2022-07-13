//To print the  upper triangular and lower triangular  matrices

#include<stdio.h>
void main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j<=i)
			{
				printf("%d ",arr[i][j]);
				sum+=arr[i][j];
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("sum = %d\n\n",sum);
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<=j)
			{
				printf("%d ",arr[i][j]);
				sum += arr[i][j];
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("sum = %d\n",sum);
}
