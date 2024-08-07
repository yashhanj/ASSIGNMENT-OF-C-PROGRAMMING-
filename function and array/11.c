/*11. WAP to accept 5 numbers from user and display in rverse order using for loop and array.*/

#include<stdio.h>
int main()
{
	int x[50],size, i;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter your array x[%d] :",i);
		scanf("%d",&x[i]);
	}
	printf("\nThe original array is : ");
	for(i=0;i<size;i++)
	{
		printf("\n%d",x[i]);
	}
	printf("\n");
	printf("\nThe reverse array  is : ");
	for(i=size-1;i>=0;i--)
	{
		printf("\n%d",x[i]);
	}
	return 0;
}
