#include<stdio.h>

int main()
{
    unsigned int reg;

    printf("Enter register value: ");
    scanf("%u", &reg);

    reg = reg | (0xF << 12);

    printf("After setting bits 12 to 15: %u\n", reg);

    return 0;

}