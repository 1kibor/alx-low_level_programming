#include "main.h"
/*
 * swap_int - swaps the values of two integers
 * @a: integer pointer
 * @b: integer pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
