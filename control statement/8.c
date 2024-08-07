/*8. WAP to accept the height of a percon in centimeters and categorize the person accoring to their height.*/

#include<stdio.h>
int main()
{
	float height;
	printf("enter your height: ");
	scanf(" %f",&height);
	
	if (height<4.0){
		printf("you are short");
	}
	else if(height>=4.0 && height <=5.5 )
	{
		printf("you have average height");
	}
	else
	{
		printf("you are tall");
	}
	return 0;
}
