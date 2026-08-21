/*5. find lower divisible by 4 for given number*/


#include<stdio.h>

int main()
{
   int n, lower;

   printf("Enter number:");
   scanf("%d", &n);
   
   lower = n & ~3;

   printf("Lower divisible by 4 = %d\n", lower);

   return 0;

}

