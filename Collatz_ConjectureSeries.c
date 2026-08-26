/*7. print collatz conjecture series for given number*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 1)
    {
        printf("%d ", n);

        if ((n & 1) == 0)
            n = n >> 1;
        else
            n = 3 * n + 1;
    }

    printf("1\n");

    return 0;
}