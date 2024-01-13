#include "main.h"
/*
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int ver;

	for (ver = 0; s[ver] != '\0'; ver++)
		;
	for (ver = ver - 1; s[ver] != '\0'; ver--)
	{
		_putchar(s[ver]);
	}
	_putchar('\n');
}

