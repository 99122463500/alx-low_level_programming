#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print sentences before main
 * function are  executed
 */
void first(void)
{
	printf("must clean! and , you must cook,\n");
	printf("I eat too much daily!\n");
}
