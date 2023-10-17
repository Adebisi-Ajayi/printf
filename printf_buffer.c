#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	char buffer[1024];
	int buffer_index = 0;

	for (int i = 0; format[i] != '\0');
	
		if (format[i] == '%')
			i++;
		{
			if (format[i + 1] == 'S')
			{
				char *str = va_arg(args, char *);

				while (str && *str && buffer_index < 1024 - 1)
				{
					buffer[buffer_index++] = *str;
					str++;
				}
				i++;
			}
			else
			{
				buffer[buffer_index++] = '%';
			}
		}
		else
		{
			buffer[buffer_index++] = format[i];
		}
		if (buffer_index >= 1023 || format[i + 1] == '\0')
		{
			buffer[buffer_index] = '\0';
			write(STDOUT_FILENO, buffer, buffer_index);
			buffer_index = 0;
		}
	}
	va_end(args);
}
