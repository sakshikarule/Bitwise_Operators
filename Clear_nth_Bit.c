#include <stdio.h>

int main()
{
    unsigned int reg;
    
    printf("Enter register value: ");
    scanf("%u", &reg);

    // Set bits 12 to 15
    reg = reg | (0xF << 12);

    printf("Register value after setting bits 12 to 15 = %u\n", reg);

    return 0;
}