/*10. set nth bit of register*/

#include <stdio.h>

int main()
{
    unsigned int reg;
    int n;

    printf("Enter register value: ");
    scanf("%u", &reg);

    printf("Enter bit position to SET: ");
    scanf("%d", &n);

    reg = reg | (1U << n);

    printf("After SET: %u\n", reg);

    return 0;
}