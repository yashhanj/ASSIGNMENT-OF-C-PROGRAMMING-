/*14. WAP to find the largest of three numbers. */
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter any num1: ");
	scanf("%d",&num1);
	
	printf("Enter any num2: ");
	scanf("%d",&num2);
	
	printf("Enter any num3: ");
	scanf("%d",&num3);
	
	if (num1>num2){
		if (num1>num3){
			printf("The num1 is largest number.");
		}
	}
	else if(num2>num3){
		if(num2>num1){
			printf("The num2 is largest number.");
		}
	}
	else{
		printf("The num3 is largest number.");
	}
	return 0;
}
