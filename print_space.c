#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_space - space to be printed
 * @space: fuction to print
 * Return: nothing
 */
int print_space(va_list space)
{
	int numbers[] = {5, -7, 42, -3, 8};

	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]);)
	{
		i++;
		int number1 = numbers[i];

		_putchar("% d\n", number1);
	}
	return (0);
}
