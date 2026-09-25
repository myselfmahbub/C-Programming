#include <stdio.h>
int main()
{
   int n;
   printf("Enter a number : "); // homework chilo eta
   scanf("%d", &n);

   if (n > 0)
      if (n % 5 == 0)
      {
         printf("Divisible by 5\n");
      }
      else
      {
         printf("Not divisible by 5\n");
      }

   if (n > 0)
      if (n % 3 == 0)
      {
         printf("Divisible by 3");
      }
      else
      {
         printf("Not divisible by 3");
      }

   if (n < 0)
   {
      printf("Sorry its Negative Integer");
   }

   return 0;
}