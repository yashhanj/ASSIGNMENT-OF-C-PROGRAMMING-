//15.	Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include<string.h>
int main()
{
	char A[100],Z[10][20];
	int i,j=0,l=0,m=0,n=0,max,min;
	printf("Enter string :");
	gets(A);
	for(i=0; A[i] != '\0'; i++)
	{
		if(A[i] == ' ')
		{
			Z[l][j]='\0';
			l++;
			j=0;
		}
		else{
			Z[l][j]=A[i];
			j++;
		}
	}
	Z[l][j] ='\0';
	
	max=strlen(Z[0]);
    min=strlen(Z[0]);
	
	for(i=0;i<=l;i++)
	{
		if (max<strlen(Z[i]))
        {
            max=strlen(Z[i]);
            m=i;
        }
	 if (min>strlen(Z[i]))
        {
            min=strlen(Z[i]);
            n=i;
        }
	}
	printf("Largest word in a string is = %s \n smallest word in a string = %s",Z[m],Z[n]);
}
