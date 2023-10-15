#include "main.h"
#include <stdlib.h>

/**
 * print_p - A function that prints an address
 * @p: address to print
 * Return: number of printed characters
 */
int print_p(va_list p)
{
	int counters = 0;
	unsigned int a[16];
	unsigned int i = 0, summ = 0;
	unsigned long n, m = 1152921504606846976;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			counters++;
		}
		return (counters);
	}
	_putchar('0');
	_putchar('x');
	counters = 2;

	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		summ += a[i];
		if (summ || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			counters++;
		}
	}
	return (counters);
}
