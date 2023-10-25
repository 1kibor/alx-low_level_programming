#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lengA = 0, lengB = 0, carry = 0, a, b, sum, biggest;
	
	while (n1[lengA] != '\0')
		lengA++;
	while (n2[lengB] != '\0')
		lengB++;
	if (lengA > lengB)
		biggest = lengA;
	else
		biggest = lengB;
	if ((biggest + 1) >= size_r)
		return (0);
	r[biggest + 1] = '\0';
	
	while (biggest >= 0)
	{
		a = (n1[lengA - 1] - '0');
		b = (n1[lengB - 1] - '0');
		if (lengA > 0 && lengB > 0)
			sum = a + b + carry;
		else if (lengA < 0 && lengB > 0)
			sum = b + carry;
		else if (lengA > 0 && lengB < 0)
			sum = a + carry;
		else
			sum = carry;
		
		if (sum > 9)
		{
			carry = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			carry = 0;
			sum = sum + '0';
		}
		r[biggest] = sum;
		lengA--;
		lengB--;
		biggest--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
