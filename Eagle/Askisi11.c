#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
   // Check if the number is less than 2, which is not considered prime
   if (n == 2)
   {
      return 0;
   }

   // Check if the number is divisible by any integers between 2 and the square root of the number
   for (int i = 2; i <= sqrt(n); i++)
   {
      if (n % i == 0)
      {
         return 0;
      }
   }

   // If the number is not divisible by any of these integers, it is prime
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

      for (int i = 1; i <= num; i++)
      {
         int currentNumber = i;
         numberAndDigitSum = currentNumber;
         do
         {
            numberAndDigitSum += (currentNumber % 10);
            currentNumber /= 10;

            if (numberAndDigitSum == num)
            {
               printf("No");
               return 0;
            }

         }

         while (currentNumber >= 1);
      }
      printf("Yes");
      return 0;
   }
   printf("No");
}
