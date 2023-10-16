#include "main.h"
#include <stdlib.h>

/**
 * print_X - A function that prints an ascii character value
 * in uppercase hexadecimal
 * @X: char to print
 * Return: number of printed characters
 */
int print_X(va_list X)
{
	unsigned int a[8];
	unsigned int j = 1, m = 268435456, n, summ = 0;
	char diff;
	int counterss;

	n = va_arg(X, unsigned int);
	diff = 'A' - ':';
	a[0] = n / m;
	for (; j < 8; j++)
	{
		m /= 16;
		a[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		summ += a[j];
		if (summ || j == 7)
		{
			if (a[j] < 10)
				_putchar('0' + a[j]);
			else
				_putchar('0' + diff + a[j]);
			counterss++;
		}
	}
	return (counterss);
}
