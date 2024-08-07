/*2. WAP of Addition, Subtraction, Multiplication and Division using switch case.*/
//using function
//with return type and with argument
#include<stdio.h>
void add(), sub(), mul(), div();
int main()
{
	int cal;
	printf("\nEnter your choice:");
	printf(" for add(1), sub(2), mul(3), div(4): ");
	scanf("%d",&cal);
	
	switch(cal)
	{
		case 1:
			add();
		break;
		case 2:
			sub();
		break;
		case 3:
			mul();
		break;
		case 4:
			div();
		break;	
	}
	
	
}
void add()
{
	int n1, n2, add=0;
	printf("\nenter value for n1:");
	scanf("%d",&n1);
	printf("\nenter value for n2:");
	scanf("%d",&n2);
	
	add = n1 + n2;
	printf("\n Addition : %d",add);
}

void sub()
{
	int n1, n2, sub=0;
	printf("\nenter value for n1:");
	scanf("%d",&n1);
	printf("\nenter value for n2:");
	scanf("%d",&n2);
	
	sub = n1 - n2;
	printf("\n Subtraction : %d",sub);
}

void mul()
{
	int n1, n2, mul=1;
	printf("\nenter value for n1:");
	scanf("%d",&n1);
	printf("\nenter value for n2:");
	scanf("%d",&n2);
	
	mul = n1 * n2;
	printf("\n Multiplication : %d",mul);
}
void div()
{
	float n1, n2, div=0;
	printf("\nenter value for n1:");
	scanf("%f",&n1);
	printf("\nenter value for n2:");
	scanf("%f",&n2);
	
	div = n1 / n2;
	printf("\n Division : %.2f",div);
}

