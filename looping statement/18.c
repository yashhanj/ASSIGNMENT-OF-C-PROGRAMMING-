/*18.write a c program to print the multiplication table of n
            a.e.g. 5 * 1 = 5
			b. 5 * 2 = 10
			    i. .
			    ii. .
			c. 5 * 10 = 50*/
#include<stdio.h>
int main()
{
	int i,n;
	start:
	printf("enter the any number for the multiplication table ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	char ans;
	printf("\nDo you wanna continue (y/n)");
	scanf("%c",&ans);
	if(ans=='y'|| ans=='Y')
	{
		goto start;
	}
}			       
