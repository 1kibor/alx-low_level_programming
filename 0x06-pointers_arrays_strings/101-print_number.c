#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, digit, digits, power;
	unsigned int temp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	a = 1;

	while (i < digits)
	{
		power = power * 10;
		a++;
	}
	b = power;
	while (b >= 1)
	{
		numchar = (temp / b) % 10;
		_putchar(numchar + '0');
		b = b / 10;
	}
}
