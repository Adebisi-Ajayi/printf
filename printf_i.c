#include "main.h"
#include <stdlib.h>

/**
 * printf_i - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */
int printf_i(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, n, summ = 0, counters = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counters++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		summ += a[j];
		if (summ != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counters++;
		}
	}
	return (counters);
}
