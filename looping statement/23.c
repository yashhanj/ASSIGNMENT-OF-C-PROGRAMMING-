/*23. C program to reverse a number using for loop.*/
//same type of code is in Q-7 but in while loop.
#include<stdio.h>
int main()
{
	long int i,num,rem=0,rev=0;
	printf("Enter your number:");
	scanf("%ld",&num);
	printf("The original number is %ld.",num);
	
	for(i=num;i!=0;i=i/10)
	{
		rem = i % 10;
		rev = (rev*10) + rem;
	}
	printf("\nhe reverse number is %ld.",rev);
	return 0;
}
