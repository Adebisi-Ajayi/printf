#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_plus - print the string
 *@plus: string to print
 *Return: nothing
 */
int print_plus(va_list plus)
{
	int numbers[] = {5, -7, 42, -3, 8};

	for (int a = 0; a < sizeof(numbers) / sizeof(numbers[0]);)
	{
		a++;
		int number = numbers[a];

		_putchar("%+d\n", number);
	}
	return (0);
}
