#include "main.h"

/**
 * print_c - print a character
 * @c: arguement
 * Return: 1
 */
int print_c(va_list c)
{
	char characters = (char)va_arg(c, int);

	_putchar(characters);
	return (1);
}
