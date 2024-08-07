/*
A
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
	int i,j,row;
	char k;
	printf("Enter the row:");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
	k='A';
		for(j=0;j<i;j++)
		{	
			printf(" %c ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
