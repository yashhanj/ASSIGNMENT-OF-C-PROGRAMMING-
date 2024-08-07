/* 5.  check number is positive or negative.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("The number you have printed is positive.");
		
	}
	else{
		printf("the number you have printed is negative.");
	}
	return 0;
	
}
