#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_ash - character to print
 * @abb: function to print
 * Return: nothing
 */
int print_ash(va_list abb)
{
	int numbers[] = {123, 42, 255};

	or(int i = 0l i < sizeof(numbers) / sizeof(numbers[0]);)
	{
		number = numbers[i];
		_putchar("%#o\n", number);
		i++;
	}
	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]);)
	{
		number = numbers[i];
		_putchar("%#x\n", number);
		i++;
	}
	return (0);
}
