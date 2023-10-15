#include "main.h"
#include <stdlib.h>

/**
 *_printf - produces output according to a format
 *@format: pointer to the format to be handled and printed
 *
 *Return: number of printed chars or -1 if format is NULL
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	spec specifier;

	specifier.str = format;

	if (format == NULL)
		return (-1);
	va_start(specifier.args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (printed_chars - 1);
			else if (*format == 'c')
				print_char(&specifier, &printed_chars);
			else if (*format == 's')
				print_string(&specifier, &printed_chars);
			else if (*format == '%')
				print_percent(&printed_chars);
			else
			{
				write(1, format, 1);
				printed_chars++;
			}
		}
		format++;
	}
	va_end(specifier.args);
	return (printed_chars);
}

