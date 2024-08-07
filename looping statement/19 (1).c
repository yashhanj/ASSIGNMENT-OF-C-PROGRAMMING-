/*19.1 
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j,r;
	printf("Enter any row: ");
	scanf("%d",&row);//4
	
	for(i=1;i<=row;i++)//row
	{
		for(j=1;j<=i;j++)//col
		{
			r=j%2;
			printf("%d ",r);
		}
		printf("\n");
	}
	return 0;
}
