/* series program
26. (1) + (1+2) + (1+2+3) + (1+2+3+4) +...+(1+2+3+4+...+n)*/

#include<stdio.h>
int main()
{
	int i,n,sum=0,j,k=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		k=i+k;//0+1
		printf("(%d)",k);//(1)
		sum += k;//0+1
		k++;//k=2
	}
	printf("\nsum of numbers are %d.",sum);
	return 0;
}
	
/*with this method sum of series is possible but print of series is not possible.
int main()
{
	int i,n,sum=0,j;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
	sum += j;
	}
	}
	printf("\nsum of numbers are %d.",sum);
	return 0;
}
	*/	
