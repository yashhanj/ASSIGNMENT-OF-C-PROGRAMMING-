/*10. Write a program in C to extract a substring from a given string.*/
#include<stdio.h>
#include<string.h>
void substring();

int main()
	{
	    substring();
	}
void substring()
{
	int i,I,L;
	char a[500];
	
	printf("Enter a string : ");
	gets(a);
	printf("Enter your index value:");
	scanf("%d",&I);
	printf("Enter your length value:");
	scanf("%d",&L);
	
	for(i=I; i<=L; i++)
	{
		printf(" %c",a[i]);
	}
}
