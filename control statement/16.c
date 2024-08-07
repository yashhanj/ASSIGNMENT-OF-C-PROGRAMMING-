/*16. Write a C program to read temperature in centigrade and
diaplay a suitable message according to the temperature state below:
Temp<0 then Freezing weather
Temp 0-10 then very Cold weather
Temp 10-20 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its very Hot */

#include<stdio.h>
int main()
{
	float Temp,C;
	printf("Enter your temperature:");
	scanf("%f",&C);
	
	//C = (F-32)* 0.56;
	Temp = (C*(9/5))+32;
	printf("The Centigrade of temperature is : %.2f",Temp);
	
	if(Temp<0)
	{
		printf("\n/*Frezzing weather*/");
	}
	else if (Temp>0 && Temp<=10)
	{
		printf("\n/*very cold weather*/");
	}
	else if (Temp>10 && Temp<=20)
	{
		printf("\n/*Normal*/");
	}
	else if (Temp>30 && Temp<40)
	{
		printf("\n/*Hot*/");
	}
	else if (Temp>=40)
	{
		printf("\n/*Very hot*/");
	}
	return 0;
}
