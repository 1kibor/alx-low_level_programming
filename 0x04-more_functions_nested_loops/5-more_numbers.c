#include "main.h"
/**
*more_numbers - prints numbers from 0 to 14, 10 times followed by a new line
*
*Return: returns 0, 
*/
void more_numbers(void)
{
int n, i;

for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)

{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar(10);
}
}
