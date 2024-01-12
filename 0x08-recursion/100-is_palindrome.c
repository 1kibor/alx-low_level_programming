#include "main.h"
/**
 * palindrome - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindrome(char *s, int l)
{
	if (*s == 0)
		return (l - 1);
	return (palindrome(s + 1, l + 1));
}
/**
 * palind1 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind1(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*s == 0)
		return (1);
	return (palind1(s + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *a)
{
	int l;

	l = palind2(a, 0);
	return (palind1(a, l));
}
