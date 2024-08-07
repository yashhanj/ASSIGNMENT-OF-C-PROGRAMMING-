/*37. WAP to Show
i. Monday to sunday using switch case*/


#include<stdio.h>
int main()
{
	int num;
	printf("Enter any num:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("MONDAY");
			break;
			
		case 2:
			printf("TUESDAY");
			break;
		
		case 3:
			printf("WEDNESDAY");
			break;
			
		case 4:
			printf("THRUSDAY");
			break;
			
		case 5:
			printf("FRIDAY");
			break;
			
		case 6:
			printf("SATURDAY");
			break;
			
		case 7:
			printf("SUNDAY");
			break;
			
		default:
			printf("/*INVALID*/");
			
	}
	return 0;
}
