#include "main.h"
#include <stdio.h>

/**
 * display_binary - display binary representation of a number
 * @num: decimal number to display as binary
 */
void display_binary(unsigned long int num)
{
    unsigned long int temp;
    int bit_shifts;

    if (num == 0)
    {
        printf("0");
        return;
    }

    for (temp = num, bit_shifts = 0; (temp >>= 1) > 0; bit_shifts++)
        ;

    for (; bit_shifts >= 0; bit_shifts--)
    {
        if ((num >> bit_shifts) & 1)
            printf("1");
        else
            printf("0");
    }
}

