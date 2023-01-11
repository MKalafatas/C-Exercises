#include <stdio.h>
#include <math.h>

/*
 * This program takes a number as input, and checks if the number is an atomic prime. If the number:
 *
 * 1) is Prime
 * 2) can be produced by adding a natural number with each of it's individual digits
 *
 * it's considered to be an atomic prime.
 */

int isPrime(int n)
{
   if (n == 2)
   {
      return 0;
   }

   for (int i = 2; i <= sqrt(n); i++)
   {
      if (n % i == 0)
      {
         return 0;
      }
   }

   return 1;
}

int main()
{
   int num, sum = 0;

   scanf("%d", &num);

   if (num < 1)
   {
      printf("Wrong Input");
      return -1;
   }

   if (isPrime(num))
   {
      int numberAndDigitSum;

      // iterate over every number, and check if the sum of the number and each of it's digits is equal to the number provided by the user
      for (int i = 1; i <= num; i++)
      {
         int currentNumber = i;
         // to store the sum of every number and each of it's digits
         numberAndDigitSum = currentNumber;
         do
         {
            // add the last digit of the number
            numberAndDigitSum += (currentNumber % 10);
            // cut the last digit
            currentNumber /= 10;
            // not atomic, by definition
            if (numberAndDigitSum == num)
            {
               printf("No");
               return 0;
            }

         }

         while (currentNumber >= 1);
      }
      // is atomic, since we've exhausted every possible number
      printf("Yes");
      return 0;
   }

   // not prime
   printf("No");
}
