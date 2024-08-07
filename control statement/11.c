/*11. WAP to find number is even or odd using ternary operator.*/
#include<stdio.h>
int main()
{
	int n1;
	printf("Enter your integers:");
	scanf("%d",&n1);
	
	(n1%2 == 0)?(printf("%d is a even number",n1)):(printf("%d is a odd number",n1));
	return 0;
}
