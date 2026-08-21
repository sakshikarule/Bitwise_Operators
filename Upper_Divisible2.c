/* 6. find upper divisible by 2 for given number*/

#include<stdio.h>

int main()
{
    int n , upper;

    printf("Enter number ;");
    scanf("%d", &n);

    upper = (n + 1) & ~1;

    printf("Upper divisible by 2 = %d\n",upper);

    return 0;

}

/* Logic : - For divisibility by 2, the last bit must be zero. 
   So I use ~1 to clear the last bit. I add 1 before masking to get the upper multiple of 2 */