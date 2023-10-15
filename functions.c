#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 *print_char - print a char from a given specifier
 *
 *@specifier: pointer to the specifier
 *@printed_chars: number of printed chars
 *
 */
void print_char(spec *specifier, int *printed_chars)
{
	char c = va_arg(specifier->args, int);

	write(1, &c, 1);
	(*printed_chars)++;
}
/**
 *print_string - prints a string
 *
 *@specifier: pointer to the specifier given in the _printf function
 *
 *@printed_chars: number of printed chars
 *
 */
void print_string(spec *specifier, int *printed_chars)
{
	char *str = va_arg(specifier->args, char *);
	int len;

	if (str == NULL)
		str = "(null)";
	len = _strlen(str);

	write(1, str, len);
	*printed_chars += len;
}
/**
 *_strlen - Calculate the lenth of a string
 *
 *@s: the string
 *
 *Return: the lesngth of the string
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 *print_percent - prints "%" sign
 *@printed_chars: pointer to increment printed chars.
 */
void print_percent(int *printed_chars)
{
	write(1, "%", 1);
	(*printed_chars)++;
}
