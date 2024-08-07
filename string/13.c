/* 13. write a program in C to remove characters from a srting except alphabets.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char a[500];
	int i;
	printf("Enter your string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')|| (a[i]==' '))
		{
			printf("%c",a[i]);
		}
	}
	return 0;
	
}

