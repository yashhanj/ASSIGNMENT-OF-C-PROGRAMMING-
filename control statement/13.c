/*13. WAP to find minimum number among 3 numbers using ternary operator.*/
#include<stdio.h>
int main()
{
	int n1,n2,n3,max=0;
	printf("Enter the n1:");
	scanf("%d",&n1);
	printf("Enter the n2:");
	scanf("%d",&n2);
	printf("Enter the n3:");
	scanf("%d",&n3);
	

	(n1<n2 && n1<n3) ? (printf("%d is a smaller number",n1)) : (n2<n3 && n2<n1) ? printf("%d is a smaller number",n2) : printf("%d is a smaller number",n3);
	
	return 0;
}
