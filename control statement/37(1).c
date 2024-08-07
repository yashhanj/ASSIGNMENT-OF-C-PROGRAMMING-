/*37. WAP to Show
ii. Vowel or Consonant using switch case.*/
#include<stdio.h>
int main()
{
	char alphabet,a;
	printf("Enter any ch:");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case 'a':
			
			printf("It is a vowel.");
		break;
		case 'A':
			
			printf("It is a vowel.");
		break;
		
		case 'e':
			
			printf("It is a vowel.");
		break;
		case 'E':
			
			printf("It is a vowel.");
		break;
		
		case 'i':
			
			printf("It is a vowel.");
		break;
		case 'I':
			
			printf("It is a vowel.");
		break;
		
		case 'o':
			
			printf("It is a vowel.");
		break;
		case 'O':
			
			printf("It is a vowel.");
		break;
		
		case 'u':
			
			printf("It is a vowel.");
		break;
		case 'U':
			
			printf("It is a vowel.");
		break;
		
		default:
			printf("IT is a consonant.");
	}
	return 0;
}
