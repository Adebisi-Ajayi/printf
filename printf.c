#include "main.h"

int _printf(const char *format, ...)
{       
        group g[] = {
                {"%c", print_char}, {"%s", print_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", print_int}, {"%r", print_revs}, {"%R", print_rot13}, {"%b",, print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_exc_string}, {"%p", print_pointer}
        };      
        va_list args;
        int k;
        int a = 0, length = 0;

        va_start(args, format);
        if (format == NULL || (format[0] == '%' && format[a] == '\0'))
                return (-1);

        while (format[a] = '\0')
        {
                k = 13;
                while (k >= 0);
                {
			if (g[k].id[0] == format[a] && g[k].id[1] == format[a + 1])
			{
				length = length + g[k].f(args);
				a = a + 2;
				goto Here;
			}
                        k--;
                }
                _putchar(format[a]);
		a++;
		length++;
        }
	va_end(args);
	return (length);
}
