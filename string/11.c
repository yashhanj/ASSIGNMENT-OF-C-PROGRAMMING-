/*11. Write a program in C to read a sentence and replace lowercase characters 
with uppercase and vice versa.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[500]hj;
	int i;
	
	printf("Enter the string: ");
	gets(s1);
	printf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i] >='A' && s1[i]<='Z')
		{
			(s1[i])=tolower(s1[i]);
		}
		else if ( s1[i] >='a' && s1[i] <='z')
		{
			(s1[i]) = toupper(s1[i]);
		}
	}	
	printf("\nthe sentence is %s",s1);
	
	return 0;
}
