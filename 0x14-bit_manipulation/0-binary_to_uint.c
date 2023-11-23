#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int total = 0, power = 1;
    int len = 0;

    if (b == NULL)
        return 0;

    // Find the length of the string
    while (b[len] != '\0')
        len++;

    // Check for invalid characters
    for (int i = len - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        if (b[i] == '1')
            total += power;

        power *= 2;
    }

    return total;
}

