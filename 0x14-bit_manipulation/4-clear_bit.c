#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: parameter
 * @index: index
 * Return: 0 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
