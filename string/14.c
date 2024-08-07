/*14 Write a program in C to combine two strings manually.*/
#include<stdio.h>
int main()
{
	char a[500], b[500],c[500];
	int i,j=0;
	
	printf("Enter your a string:");
	gets(a);
	
	printf("Enter your b string:");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[j] = a[i];
		j++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		c[j] = b[i];
		j++;
	}
	c[j] ='\0';
	printf("\nThe combine string of %s and %s is : %s",a,b,c);
	return 0;
}
