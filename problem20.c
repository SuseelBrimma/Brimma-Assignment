#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include"big_int.h"

int main(int argc,const char* argv[])
{
    BigInt N(1);
    int32_t i;
    uint32_t sum = 0;
    
    for (i=2; i<=100; ++i) {
        N.Multiply(i);
    }
    while (!N.Zero()) {
        sum += N.DivMod(10);
    }
    printf("sum = %u\n", sum);
    return 0;
}
