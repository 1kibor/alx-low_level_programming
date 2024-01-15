#include "main.h"
/**
 * print_chessboard - prints a chessboard.
 * @a: source matrix
 *
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int x, p;

	for (x = 0; x <= 7; x++)
	{
		for (p = 0; p <= 7; p++)
		{
			_putchar(a[x][p]);
		}
		_putchar('\n');
	}
}
