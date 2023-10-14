#include "main.h"

/**
 * print_char - print a character
 * @val: arguement
 * Return: 1
 */
int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
