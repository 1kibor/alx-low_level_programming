#include "main.h"
/**
 * _strcat - function that concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return:  dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
		a++;

	while (*(src + b) != '\0' && a < 49)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	*(dest + a) = '\0';
	return (dest);
}
