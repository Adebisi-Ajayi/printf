#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_ash - character to print
 * @ash: function to print
 * Return: nothing
 */
int print_ash(va_list ash)
{
	int numbers[] = {123, 42, 255};

	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]);)
	{
		i++;
		int number = numbers[i];

		_putchar("%#o\n", number);
		_putchar("%#x\n", number);
	}
	return (0);
}
