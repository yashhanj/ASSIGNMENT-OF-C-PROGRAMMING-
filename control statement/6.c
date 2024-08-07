/*6. Find the character is vowel or not. */

#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter any alphabet: ");
	scanf("\n%c",&alphabet);

	if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'|| 
	alphabet=='A' || alphabet=='E' ||alphabet=='I'|| alphabet=='O' ||alphabet =='U')	
	{
		printf("\nThe alphabet is a vowel character.");
		}
	else
	{
		printf("\nThe alphabet is not a vowel character.");
	}
	return 0;
	
}
