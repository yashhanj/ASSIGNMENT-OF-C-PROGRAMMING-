/*7. WAP find out length of string without using inbuilt function.*/
//without return type and with argument.
#include<stdio.h>
void name(char sent[]);
int main()
{
	char sent[100];
	name(sent);
}
void name(char sent[100])
{
	int i,length=0;

	printf("Enter your sentence: ");
	gets(sent);
	
	for(i=0;sent[i]!='\0';i++)
	{
		length++;
	}
	printf("Enter the lenght of string: %d",length);
}
