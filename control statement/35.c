/*35. Accept the input month number 
and print number of days in that month.*/

#include<stdio.h>
int main()
{
	int days, month,even;
	printf("Enter your month :");
	scanf("%d",&month);
	
	even = month/2==0;
	
	if(month == even)
	{
		printf("The number of days in month %d is 30 days.",month);
	}
	else if(month == 2)
	{
		printf("the number of dasys in month %d is 28 days.",month);
	}
	else
	{ 
		printf("The number of days in  month %d in 31 days.", month);
	}
	return 0;
}
