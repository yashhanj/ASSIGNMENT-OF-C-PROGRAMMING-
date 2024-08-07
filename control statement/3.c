//3.WAP to check if given year is a leap year or not
#include <stdio.h>
int main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 4 == 0) 
   {
      printf("%d a leap year.", year);
   }

   else 
   {
      printf("%d not leap year.", year);
   }

   return 0;
}

