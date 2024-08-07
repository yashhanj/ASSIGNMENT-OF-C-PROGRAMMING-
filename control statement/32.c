/* 32. Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Baisc Salary<=10000: HRA = 20%, DA=80%
BAsic Salary<=20000: HRA=25%,DA = 90%
Basic Salary>20000: HRA=30%, DA = 95%
*/
//here we will individual multiplication of both and then add them to get the gross salary.
// HBA(house rent allowance) 
//DA(dearness allowane)

#include<stdio.h>
int main()
{
	long int BS, GS;
	float HRA,DA;
	int total1,total2;
	printf("Enter your  Basic salary :");
	scanf("%d",&BS);
	
	if(BS<=10000)
	{
		HRA=0.2;//20% = 0.2
		DA=0.8;//80% = 0.8
		total1 = BS*HRA;
		total2= BS*DA;
		GS = total1+total2+BS;
		printf("\nThe total GS of the employee is : %d ",GS);
	}
	else if(BS<=20000)
	{
		HRA=0.25;//25%
		DA=0.9;//90%
		total1 = BS*HRA;
		total2= BS*DA;
		GS = total1+total2+BS;
		printf("The total GS of the employee is : %d ",GS);
		
	}
	else if(BS>20000)
	{
		HRA=0.3;//30%
		DA=0.95;//95%
		total1 = BS*HRA;
		total2= BS*DA;
		GS = total1+total2+BS;
		printf("The total GS of the employee is : %d ",GS);
		
	}
	return 0;
}
