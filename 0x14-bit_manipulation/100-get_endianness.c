#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 1 if big endian, 0 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}