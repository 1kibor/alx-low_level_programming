#include "main.h"
/**
 * *_strcpy - fxn that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int p, l;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (p = 0; p < l; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}
