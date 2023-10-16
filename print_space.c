#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_space - space to be printed
 * @ab: fuction to print
 * Return: nothing
 */
int print_space(va_list ab)
{
	int numbers[] = {5, -7, 42, -3, 8};

	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]);)
	{
		number = numbers[i];
		_putchar("% d\n", number);
		i++;
	}
	return (0);
}
