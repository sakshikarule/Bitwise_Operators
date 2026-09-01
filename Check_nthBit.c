/*9. check nth bit of register*/


#include <stdio.h>

int main()
{
    unsigned int reg;
    int n;

    printf("Enter register value: ");
    scanf("%u", &reg);

    printf("Enter bit position: ");
    scanf("%d", &n);

    if (reg & (1U << n))
        printf("Bit %d is SET\n", n);
    else
        printf("Bit %d is CLEAR\n", n);

    return 0;
}