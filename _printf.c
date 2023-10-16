#include "main.h"
#include <stdarg.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	printer_t p[] = {
		{"c", printf_c},
		{"s", printf_s},
		{"i", printf_i},
		{"d", printf_d},
		{"b", printf_b},
		{"u", printf_u},
		{"o", printf_o},
		{"x", printf_x},
		{"X", printf_X},
		{"p", printf_p},
		{"S", printf_S},
		{"r", printf_r},
		{"R", printf_R},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
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
	unsigned int i = 0, counters = 0;

	if (format == NULL)
		return (-1);

	va_start(ade, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counters++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counters++;
				i += 2;
				continue;
			}
			else
			{
				f = check_format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counters += f(ade);
				continue;
			}
		}
		i++;
	}
	va_end(ade);
	return (counters);
}
