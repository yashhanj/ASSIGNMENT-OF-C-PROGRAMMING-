/*6. Write a program in C to count the total number of alphabets,digits and special characters in a string.*/
 //with the help of ascii value.
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[100] ;
 	int i,alphabets=0,ALPHABETS=0,special=0,digits=0,total=0;
 	
 	printf("Enter your string: ");
 	gets(str);
 	for(i=0;str[i]!='\0';i++)
 	{
 		
		if(str[i]>=65 && str[i]<=90)
		{
			ALPHABETS++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			alphabets++;
		}
		else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || 
		(str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
		{
			special++;
		}
		else if(str[i]>=48 && str[i]<57)
		{
			digits++;
		}
		total++;
		
	}
	printf("\nThe total  upper ALPHABETS are :%d",ALPHABETS);
	printf("\nThe total  lower alphabets are :%d",alphabets);
	printf("\nThe total special are :%d",special);
	printf("\nThe total digits are :%d",digits);
	printf("\nThe total number of charaters are :%d",total);
 }
