/*
1
2  3 
4  5  6
7  8  9  10
11 12 13 14 15*/

#include<stdio.h>
int main()
{
	int i,j,row,k=1;
	printf("Enter your row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)//row
	{
		for(j=1;j<=i;j++)//col
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
		}
	return 0;
}
