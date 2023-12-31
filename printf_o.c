#include "main.h"

/**
 * printf_o - A function that prints an unsigned int in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
 */
int printf_o(va_list o)
{
	unsigned int a[11];
	unsigned int j = 1, m = 1073741824, n, summ = 0;
	int counters;

	n = va_arg(o, unsigned int);
	a[0] = n / m;
	for (; j < 11; j++)
	{
		m /= 8;
		a[j] = (n / m) % 8;
	}
	for (j = 0; j < 11; j++)
	{
		summ += a[j];
		if (summ || j == 10)
		{
			_putchar('0' + a[j]);
			counters++;
		}
	}
	return (counters);
}
