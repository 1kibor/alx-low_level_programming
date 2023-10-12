#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return: 0
*/

void print_diagonal(int n)
{
int l, spc;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (spc = 0; spc < l; spc++)
_putchar(' ');

_putchar('\\');

if (l == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
