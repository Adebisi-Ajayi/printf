#include "main.h"

/**
 * print_c - print a character
 * @c: arguement
 * Return: 1
 */
int print_c(va_list c)
{
	char x_character = (char)va_arg(c, int);

	_putchar(x_character);
	return (1);
}
