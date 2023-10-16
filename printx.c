#include "main.h"
#include <stdlib.h>

/**
 * print_x - A function that prints an ascii char value in
 * lowercase hexadecimal
 * @x: char to print
 * Return: number of printed characters
 */
int print_x(va_list x)
{
	unsigned int a[8];
	unsigned int j = 1, m = 268435456, n, summ = 0;
	char diff;
	int counterss = 0;

	n = va_arg(x, unsigned int);
	diff = 'a' - ':';
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
