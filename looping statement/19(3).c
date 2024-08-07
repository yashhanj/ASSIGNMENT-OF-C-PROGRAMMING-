/*
     *
   * * *
  * * * * *
 * * * * * * *
* * * * * *  * * *
  */
  
#include<stdio.h>
int main()
{
	int i,j,spc=0,row;
	printf("Enter your row:");
	scanf("%d",&row);
	
	spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" ");
		}
		
		for(j=0;j<=2*(i-1);j++)
		{
			
			printf("*");
		}
		printf("\n");
		spc--;
}
	return 0;
}
