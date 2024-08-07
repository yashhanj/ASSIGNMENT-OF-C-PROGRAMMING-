/*17. Write a C program to check whether a triangle can be formed with the given values for the angles.*/
// fromula for triangle is (c2 = a2*b2)
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	int power1,power2,power3;
	printf("Enter your num for a: ");
	scanf("%d",&a);
	
	printf("Enter your num for b: ");
	scanf("%d",&b);
	
	printf("Enter your num for c: ");
	scanf("%d",&c);
	
	power1 = pow(c,2);
	printf("\nThe value of c is: %d",power1);
	
	power2 = pow(a,2);
	printf("\nThe value of a is: %d",power2);
	
	power3 = pow(b,2);
	printf("\nThe value of b is: %d",power3);
	
	if(power1==power2+power3)
	{
		printf("\n/*yes*/");
		printf("\nThe num you have enter will form a trianle.");
	}
	else
	{
		printf("\nIt is not form a triangle.");
	}
	
	return 0;
}
