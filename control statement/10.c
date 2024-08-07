/*10. WAP to check wheather a number is negative, positive or zero.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any num: ");
	scanf("%d",&num);
	
	if (num>0)
	{
		printf("IT is a positive number.");
	}
	else if(num<0)
	{
		printf("IT is a negative number. ");
	}
	else{
		printf("It is zero.");
	}
	return 0;
}
