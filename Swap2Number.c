/*swap two number*/


#include<stdio.h>

int main()
{
   int a, b;

   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   a = a ^ b;
   b = a ^ b;
   a = a ^ b;

   printf("After swapping:\n");
   printf("a = %d\n", a);
   printf("b = %d\n", b);

   return 0;
}

/*I am using XOR operation to
 swap two numbers without using a temporary variable.*/