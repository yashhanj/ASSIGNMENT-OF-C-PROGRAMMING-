/*4. Write a program in C to count the total number of words in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,word=1;
	
	printf("\nEnter your sentence:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			word++;
		}
	}
	printf("\nThe total number of words are %d ",word);
	return 0;
}
/*The reason word is initialized to 1 instead of 0 is to 
	account for the first word in the sentence.
	When the program encounters a space (' ') in the string, 
	it increments the word counter. However, if word were initialized to 0, 
the first word would not be counted correctly.
example, consider the sentence "Hello World". 
If word were initialized to 0, the program would only increment word when 
it encounters the space between "Hello" and "World", resulting in a final count of 1 word. 
However, there are actually 2 words in the sentence.

By initializing word to 1, the program assumes that there is at least one word 
in the sentence (the first word). Then, when it encounters a space, 
it increments word to account for the additional word.*/
