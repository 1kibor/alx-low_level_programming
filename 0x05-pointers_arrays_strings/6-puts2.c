#include "main.h"
/**
 * puts2 - functionn that prints one char out of 2 of a string
 * followed by a new line
 *
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int lengY, i;

	lengY = 0;

	while (str[lengY] != '\0')
	{
		lengY++;
	}

	for (i = 0; i < lengY; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
