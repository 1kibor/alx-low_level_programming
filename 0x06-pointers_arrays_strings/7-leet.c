#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int x = 0;
	int y;

	while (*(s + x) != '\0')
	{
		for (y = 0; y <= 9; y++)
		{
			if (*(s + x) == a[y])
			{
				*(s + x) = n[y];
			}
		}
		x++;
	}
	return (s);
}
