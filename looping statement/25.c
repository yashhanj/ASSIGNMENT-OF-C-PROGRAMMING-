/* series program
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) +...+(n*n) */

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d \t",i*i);
		sum += i*i;
	}
	printf("\nsum of numbers are %d.",sum);
	return 0;
}
