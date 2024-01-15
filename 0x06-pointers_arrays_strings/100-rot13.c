#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x = 0;
	int y;

	while (*(s + x) != '\0')
	{
		for (y = 0; y <= 51; y++)
		{
			if (*(s + x) == a[y])
			{
				*(s + x) = rot[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
