/*15. read value from bit 19 to 24 of register*/


#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t reg = 0x01F80000;
    uint32_t value;

    value = (reg >> 19) & 0x3F;

    printf("Bits 19 to 24 = %u\n", value);
    
    return 0;
}