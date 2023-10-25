#include "main.h"
/*
 * palindrom1 - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindrom1(char *a, int lg)
{
	if (*a == 0)
		return (lg - 1);
	return (palindrom1(a + 1, lg + 1));
}
/**
 * palindrom2 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palindrom2(char *a, int lg)
{
	if (*a != *(a + lg))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindrom2(a + 1, lg - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * otherwise,return 0.
int is_palindrome(char *s)
{
	int l;

	lg = palindrom1(s, 0);
	return (palindrom2(s, l));
}
