/*10. WAP to perform palindrome number using for loop and function.*/
//without return type and with argument
#include<stdio.h>
void reverse(int num);
int main()
{
	int num;
	reverse(num);
	return 0;
}
void reverse(int num){
	int i,rem,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=num;i!=0;i=i/10)
	{
		rem = i%10;
		rev = (rev *10) + rem;
		
	}
	printf("Enter the reverse of number is %d",rev);
}


