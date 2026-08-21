/* 4. find upper divisible by 4 for given number*/

#include<stdio.h>

int main()
{
    int n, upper;

    printf("Enter number:");
    scanf("%d", &n);

    upper = (n + 3) & ~3;

    printf("Upper divisible by 4 = %d\n", upper);

    return 0;

}

/* Logic :- Add 3 to reach/push toward the next multiple of 4, then clear the last 2 bits to get a multiple of 4. */