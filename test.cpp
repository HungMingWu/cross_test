#include <iostream>
#include <assert.h>
int main(void)
{
    int w = 0;
    switch (sizeof(void *)) {
    case 1: w = 8;  break;
    case 2: w = 16; break;
    case 4: w = 32; break;
    case 8: w = 64; break;
    default: assert(0);
    }

    uint16_t value = 0xDEAD;
    const char *b = "?";
    switch (*(uint8_t *)(&value)) {
    case 0xDE: b = "big";    break;
    case 0xAD: b = "little"; break;
    }

    printf("%d-bit, %s endian\n", w, b);
}

