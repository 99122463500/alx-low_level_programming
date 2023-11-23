#ifndef ALTERNATIVE_H
#define ALTERNATIVE_H

/* Custom putchar function */
int custom_putchar(char c);

/* Convert binary to unsigned int */
unsigned int convert_binary_to_uint(const char *binary_string);

/* Print binary representation of an unsigned long int */
void display_binary(unsigned long int num);

/* Get the value of a bit at a specific index */
int obtain_bit_value(unsigned long int num, unsigned int index);

/* Set a bit at a particular index to 1 */
int set_bit_to_one(unsigned long int *num, unsigned int index);

/* Set a bit at a particular index to 0 */
int set_bit_to_zero(unsigned long int *num, unsigned int index);

/* Count the number of bits to flip to transform one number to another */
unsigned int count_flipped_bits(unsigned long int num1, unsigned long int num2);

/* Check the endianness of the system */
int check_endianness(void);

#endif

