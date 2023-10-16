#include "main.h"
#include <stdlib.h>

/**
 * print_u - A function that prints an unsigned integer
 * @u: unsigned int to print
 * Return: number of printed digits
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int j = 1, m = 1000000000, n, summ = 0;
	int counters = 0;

	n = va_arg(u, unsigned int);
	a[0] = n / m;
	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		summ += a[j];
		if (summ || j == 9)
		{
			_putchar('0' + a[j]);
			counters++;
		}
	}
	return (counters);
}