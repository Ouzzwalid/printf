#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 *struct specifier - structure combining format with a specifier given in args
 *@str: pointer to string given in format
 *@args: list of arguments
 *
 */
typedef struct specifier
{
	const char *str;
	va_list args;
} spec;
int _printf(const char *format, ...);
void print_char(spec *specifier, int *printed_chars);
void print_string(spec *specifier, int *printed_chards);
void print_percent(int *printed_chars);
int _strlen(char *s);
void print_integer(spec *specifier, int *printed_chars);
void intToString(int, char *);
void reverseString(char *str);
#endif
