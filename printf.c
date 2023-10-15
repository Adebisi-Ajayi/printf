#include "main.h"
#include <stdarg.h>
/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */

int (*check_format(const char *format))(va_list)
{
	int a = 0;
	group g[] = {
		{c, print_char},
		{s, print_string},
		{ %, print_37},
		{d, print_dec},
		{i, print_int},
		{r, print_revs},
		{R, print_rot13},
		{b, print_bin},
		{u, print_unsigned},
		{o, print_oct},
		{x, print_hex},
		{X, print_HEX},
		{S, print_exc_string},
		{p, print_pointer}
		{NULL, NULL}
	};

	for (; g[a].t != NULL; a++)
	{
		if (*(g[a].t) == *format)
			break;
	}
	return (g[a].f);
}
/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list ade;
	int (*f)(va_list);
	unsigned int a = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(ade, format);
	while (format && format[a])
	{
		if (format[i] != '%')
		{
			_putchar(format[a]);
			count++;
			a++;
			continue;
		}
		else
		{
			if (format[a + 1] == '%')
			{
				_putchar('%');
				count++;
				a += 2;
				continue;
			}
			else
			{
				f = check_format(&format[a + 1]);
				if (f == NULL)
					return (-1);
				a += 2;
				count += f(ade);
				continue;
			}
		}
		a++;
	}
	va_end(ade);
	return (count);
}
