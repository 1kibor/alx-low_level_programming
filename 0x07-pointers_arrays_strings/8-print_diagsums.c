#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
        int x, y, sum_1 = 0, sum_2 = 0, k, l = 0;

        k = size - 1;
        for (x = 0; x < size; x++)
        {
                for (y = 0; y < size; y++)
                {
                        if (x == y)
                                sum_1 += a[l];
                        if (y == k)
                                sum_2 += a[l];
                        l++;
                }
                k--;
        }
        printf("%x, %x\n", sum_1, sum_2);
}
