#include <stdio.h>

int main(void)
{
    int lval = 0xFEDCBA98 << 32;
    int aval = 0xFEDCBA98 >> 36;
    unsigned uval = 0xFEDCBA98 >> 40;
    printf("lval is %.2x , aval is %.2x , uval is %.2x \n", lval, aval, uval);
    return 0;
}
