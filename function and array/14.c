/*14 perform 2D matrix array*/

#include<stdio.h>
int main()
{
	int x[50][50],size,i,j;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter your value for matrix x[%d][%d]",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
