/*9.	Write a program in C to find the maximum number of characters in a string.*/
#include<stdio.h>
int main()
{
	char a[100],max;//max is for character having maximum value.
	int i,j,count,m=0;//to find m value in string.
	//int count,i,m=0;
	printf("\n Enter your string : ");
	gets(a);
	strupr(a);//to lower the string
	for(j='A'; j<='Z'; j++)
	{
		count = 0;
		for(i=0;a[i]!='\0';i++)
		{
			if(j == a[i])
			{
				count++;
			}
		}
	
		if (count > m)
        {
            m = count;
            max = j;
        }
	}
	//to print it
	if (m > 0)
    {
        printf("\n\nmaximum character in a string is :%c that is : %d times\n", max, m);
    }
	return 0;
}
	
