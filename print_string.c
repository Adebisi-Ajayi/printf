#include "main.h"
/**
 * print_string - print a string
 * @val: argument
 * Return: the length of the string
 */
int printf_string(va_list val)
{
	char *str;
	int a;
	int len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(nill)";
		len = _strlen(str);
		for (a = 0; a < len; a++)
			_putchar(str[a]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (a = 0; a < len; a++)
			_putchar(str[a]);
		return (len);
	}
}
