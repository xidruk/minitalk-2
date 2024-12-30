#include <stdio.h>
#include <unistd.h>
#include "minitalk.h"

void bit_extractor(char c, int bit_position)
{
    int bit_shifter;
    // /char *bits;
    int bits;

    bit_shifter = 7;
    while (bit_shifter >= 0)
    {
        bits = (c >> bit_shifter) & 1;
        printNum(bits);
        bit_shifter--;
    }
}

int main()
{

    bit_extractor('a', 8);

    return (0);
}
