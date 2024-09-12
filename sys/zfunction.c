#include <stdio.h>

long zfunction(long param) {
    param &= 0xFFFFE01F;

    param <<= 8;

    param |= 0x000000ff;

    return param;
}
