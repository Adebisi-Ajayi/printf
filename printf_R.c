#include "main.h"
#include <stdlib.h>

/**
 * printf_R - A function that prints a string in rot13 format
 * @R: string to print
 * Return: number of printed characters
 */
int printf_R(va_list R)
{
	char *str;
	unsigned int i = 0, j = 0;
	int counters = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				counters++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			counters++;
		}
	}
	return (counters);
}
