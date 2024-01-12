#include "main.h"
/**
 * swap_int - swaps two values
 * @a: integer 
 * @b: integer 
 *
 * Return: On success 1.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
