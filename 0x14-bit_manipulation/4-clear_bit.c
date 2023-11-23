#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set value bit to 0 on given index
 * @n: pointer decimal number to change
 * @index: index position change
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
