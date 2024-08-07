/*22. Accept 3 numbers from user using while loop and check each numbers palindrome.*/
#include<stdio.h>
int main()
{
	int num,i,rev=0,rem,j,copy;
	
	i=1;
	while(i<=3)
	{
		printf("\nEnter the number:");
		scanf("%d",&num);
		printf("%d",num);
		copy = num;
			
		//copy = num;
	rev=0;//resetting the value of rev number from start, so that it will forget the privious value.	
	for(j=copy; j!=0; j=j/10)
		{
			rem = j%10;
			rev = (rev*10) + rem;
			
		}	
		//printf("\nReverse number: %d",rev);
		
	if(rev == copy)
	{
		printf("\nIt is a palindrome number.");
	}
	else
	{
		printf("\nIt is not a palindrone number.");
	}
	i++;
	}
	//printf("Reverse number: %d",rev);
	return 0;
}
