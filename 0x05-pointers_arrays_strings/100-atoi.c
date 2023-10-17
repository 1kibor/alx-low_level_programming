 #include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, leng, p, digit;

	i = 0;
	d = 0;
	n = 0;
	leng = 0;
	p = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;

	while (i < leng && p == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			p = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			p = 0;
		}
		i++;
	}

	if (p == 0)
		return (0);

	return (n);
}
