#include "main.h"
/**
 * print_s - print a string
 * @s: argument
 * Return: the length of the string
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int a = 0;

	if (str == NULL)
		str = "(null)";
	while (str[a])
		_putchar(str[a++]);
	return (a);
}
