#include "main.h"
/*
 * puts_half - fxn that prints half of a string, followed by a new line
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int p, n, y;

	p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	if (p % 2 == 0)
	{
		for (y = p / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	} else if (p % 2)
	{
		for (n = (p - 1) / 2; n < p - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
