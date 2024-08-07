/*4. WAP to make simple calculator(operation include addition, subtraction, Multiplication,division, modulo) 
using conditional statement.*/

#include<stdio.h>
int main()
{
	int n1, n2,add,sub,mul,calculator;
	float div,mod;
 		printf("Enter any number for n1:");
 		scanf("%d",&n1);
		printf("Enter any number for n2:");
 		scanf("%d",&n2);
 		
 	printf("\nselect any number from the given : 1-add, 2-sub,3-div,4-mod,5-mul :");
 	scanf("\n %d",&calculator);
 	switch(calculator)
 	{
 		case 1:
 		    printf("/*Addition/*");
 		    add = n1+n2;
			 	//printf("\nThe addition of number: %d ",add); 
			 	printf("\n add = %d+%d = %d",n1,n2,add);
		break;
		case 2:
 		    printf("/*Subtraction/*");
 		    sub = n1-n2;
			 	printf("\n sub = %d-%d = %d",n1,n2,sub);
		break;
		case 3:
 		    printf("/*Division/*");
 		    div = n1/n2;
			 	printf("\n div = %d / %d = %.2f",n1,n2,div);
		break;
		case 4:
 		    printf("/*Modulas/*");
 		    mod = n1%n2;
			 	printf("\n mod = %d %% %d = %.2f",n1,n2,mod);
		break;
		case 5:
 		    printf("/*Multiplication/*");
 		    mul = n1*n2;
			 	printf("\n mul = %d*%d = %d",n1,n2,mul);
		break;
		 		
 		default: 
 		
		printf("It is invalid, can't you see the num 1 to 5 from option, then select from them.");
	}
	 return 0;

}
