#include "main.h"
/*
 * reset_to_98 - updates the value of the variables
 * the pointer points to to 98
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
