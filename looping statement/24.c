/* series program
24. 1+2+3+4+5+...+n*/

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" \t %d",i);
		sum += i;
	}
	printf("\nsum of numbers are %d.",sum);
	return 0;
}
