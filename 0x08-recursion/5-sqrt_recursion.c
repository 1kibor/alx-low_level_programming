#include "main.h"
/*
 * sqrt0 - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int sqrt0(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt0(a, b + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned; if n doesn't have a square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt0(n, 1));
}
