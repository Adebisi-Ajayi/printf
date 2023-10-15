#include "main.h"
/**
 * printf_string - print a string
 * @val: argument
 * Return: the length of the string
 */
int printf_string(va_list val)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
