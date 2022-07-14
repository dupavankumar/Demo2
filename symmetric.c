//To find given matrix is symmetric or not

#include<stdio.h>
void main()
{
	int arr[][3] = {{1,2,3},{8,4,5},{3,5,7}};
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i][j] == arr[j][i])
				sum++;
			else
				break;
		}
	}
	if(sum == 3)
		printf("Given matrix is Symmetric\n");
	else
		printf("Not a Symmetric matrix\n");
}

