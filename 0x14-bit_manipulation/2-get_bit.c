#include "main.h"

/**
 * get_bit - a function that gets a bit at index
 * @n: the number to get bit from
 * @index: the index where the bit get at
 *
 * Return: value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
