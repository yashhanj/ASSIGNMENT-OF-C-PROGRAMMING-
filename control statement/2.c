//2. write a program to read a value of a integer m and display the value of n is 1 when m is larger
//  then 0,0 when m is 0 and -1 when m is less than 0
#include <stdio.h>

int main() 
{
    int m,n;

    printf("Enter a integer : ");
    scanf("%d", &m);

    if (m >=0) 
	{
        n = 1;
    } else if (m<0 && m>-1) 
	{
        n = 0;
    } else {
        n = -1;
    }

    printf("The value of n is: %d\n", n);

    return 0;
}
