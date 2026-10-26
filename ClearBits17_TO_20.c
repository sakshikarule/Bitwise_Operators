/*14. clear bits 17 to 20 of register*/


#include <stdio.h>

int main()

{
    unsigned int reg = 0xFFFFFFFF;

    reg = reg & ~(0xF << 17);

    printf("Register = 0x%X\n", reg);

    return 0;

    
}