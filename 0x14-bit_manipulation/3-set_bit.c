#include "main.h"

/**
 * set_bit - set value on bit to 1 at a given index
 * @n: decimal number pass pointer
 * @index: index position change, start on 0
 * Return: 1 if works, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
