#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int length;
	int length2;
	unsigned int ui;
	void *address;

	length = _printf("Let's try to printf a simple sentence.\n");
	length2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	address = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", length, length);
	printf("Length:[%d, %i]\n", length2, length2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", address);
	printf("Address:[%p]\n", address);
	length = _printf("Percent:[%%]\n");
	length2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", length);
	printf("Len:[%d]\n", length2);
	_printf("Unknown:[%r]\n", "hello");
	printf("Unknown:[%r]\n");
	_printf("Hello %r\n", "Hello");
	printf("Hello %r\n", "Hello");
	_printf("%S\n", "Elkanah\nSchool");
	printf("%S\n", "Elkanah\nSchool");
	_printf("%R\n", "Elkanah School");
	printf("%R\n", "Elkanah School");
	return (0);
}
