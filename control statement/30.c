/*30. If bill exceeds Rs. 800 then a surchange of 18% will be charged and 
the minimum bill should be Rs.256/-.
*/
//surchange is a extra bill we are paying.
// if bill is more than 800 then 0.18 will be charged but paying extra bill is still left 
// means total will be surchange + your charge(bill * 0.18).
#include<stdio.h>
int main()
{
	
	int bill;
	float charge,total;
	
	printf("Enter your bill amount: ");
	scanf("%d",&bill);
	
	if(bill>=800)
	{
		//18%=0.18
		charge = bill*0.18;
		total = charge+bill;
		printf("Your total bill is: %.2f ", total);
	}
	else if(bill>=256 && bill<800)
	{
		printf("your total bill is : %d ", bill);
	}
	else
	{
		printf("Your total bill is: 256 ");
	}
	return 0;
}

