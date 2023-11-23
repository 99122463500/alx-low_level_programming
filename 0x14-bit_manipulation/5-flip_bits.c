#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bit convert number to another number
 * @n: first number
 * @m: second number to change
 * Return: number on bits needs to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
