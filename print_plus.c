#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_plus - print the string
 *@a: string to print
 *Return: nothing
 */
int print_plus(va_list a)
{
	int numbers[] = {5, -7, 42, -3, 8};

	for (a = 0; a < sizeof(numbers) / sizeof(numbers[0]);)
	{
		a++;
		number = numbers[a];
		_putchar("%+d\n", number);
	}
	return (0);
}
