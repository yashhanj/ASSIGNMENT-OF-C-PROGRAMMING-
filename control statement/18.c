/*18. Write a C program to calculate profit and loss on a transaction.*/
//profit= sellingprice-costprice
//loss = costprice-selling price

#include<stdio.h>
int main()
{
	int SP,CP,profit,loss;
	
	printf("Enter your selling price: ");
	scanf("%d",&SP);
	
	printf("Enter your Cost price: ");
	scanf("%d",&CP);
	
	profit = SP-CP;

	loss = CP-SP;
	
	
	if (profit > loss)
	{
		printf("\nThe profit of the product : %d ",profit);
		printf("\n/*good business mind*/");
		printf("\nyou are having good amount of transaction.");
	}
	else if (profit == loss)
	{
		printf("\n you got neither profit nor loss.");
	}
	else
	{
		printf("\nThe loss of the product : %d ",loss);
		printf("\nyou are having a loss");
	}
	
	return 0;
	
}
