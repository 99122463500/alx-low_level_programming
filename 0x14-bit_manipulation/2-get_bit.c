#include "main.h"
#include <stdio.h>
/**
 * get_bit - the value of bit on a given index
 * @n: number evaluation
 * @index: index start on 0, to the bit to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
