/*1. Write a program in C to find the length of a string without using library functions.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char sentence[100];
	int length=0,i;
	printf("Enter your sentence : ");
	gets(sentence);
	
	for(i=0;sentence[i]!='\0';i++)
	{
		length++;/*This is a loop that starts with i at 0 and continues 
		until it reaches the end of the string 
		('\0' is the null terminator which marks the end of the string).
		Inside the loop, length is incremented by 1 for each character in the string.*/
	}
	printf("The length of a string %d",length);
	return 0;
}
