/*1. Write a program to find out the max number from given array using function.*/

#include<stdio.h>
int max();
int main()
{
	int ans;
	ans = max();
	printf("\n the max number is %d",ans);
}
int max()
{
	int x[50],i,size,max=0;
	
	printf("Enter any number for size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter your number x[%d] : ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",x[i]);
		//here it is start with index value.
		if ( max < x[i])
		{
			max = x[i];
		}
	}
	//printf("\nThe max number in the array is %d. ",max);
	
	return max;
}

