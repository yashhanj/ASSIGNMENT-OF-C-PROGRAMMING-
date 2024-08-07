/*2. Write a program in C to separate individual characters from a sting.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char a[500];
	int i;
	printf("Enter your sentence:");
	gets(a);
	
	printf("Enter the character of string are:");
	for(i=0;a[i]!='\0';i++)
	{
		printf(" \n%c",a[i]);//without \n and with \t.
	}
	
	return 0;
}
/*
Why a[i] instead of just a?

The reason you can't just use a in the printf statement is that a is an array of characters, 
and printf doesn't know how to print an entire array at once.

When you use a in the printf statement, 
it's equivalent to passing the memory address of the first element of the array (a[0]) to printf. 
However, printf is expecting a single character (%c format specifier), not a memory address.

By using a[i], you're accessing the i-th element of the array, 
which is a single character. This is what printf is expecting, so it works correctly.*/
