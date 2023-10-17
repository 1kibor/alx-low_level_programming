#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int p, n, leng;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	leng = p;

	for (n = leng - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
