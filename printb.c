#include "main.h"

/**
 * print_b - A function that prints an unsigned int i binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */
int print_b(va_list b)
{
	unsigned int n, m = 2147483648, j = 1, summ = 0;
	unsigned int a[32];
	int counters = 0;

	n = va_arg(b, unsigned int);
	a[0] = n / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (n / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		summ += a[j];
		if (summ || j == 31)
		{
			_putchar('0' + a[j]);
			counters++;
		}
	}
	return (counters);
}
