#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return : String in reverse
 */
void rev_string(char *s)
{
	char rev;
	int n, leng, leng1;

	leng = 0;
	leng1 = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	leng1 = leng - 1;

	for (n = 0; n < leng / 2; n++)
	{
		rev = s[n];
		s[n] = s[leng1];
		s[leng1--] = rev;
	}
}
