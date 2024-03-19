#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void print_c(va_list *args)
{
	_putchar(va_arg(*args, int)); /* print c is working fine */
}
void print_s(va_list *args)
{
	printf("%s", va_arg(*args, char *)); /* print s is printing outside [brackets] when testing */
}
/**
 * _printf - prints output
 * @format: character string
 * Return: always 0
 */
int _printf(const char *format, ...)
{
	typeofprint array[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL},
	};
	int i, j;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++) /* iterate through "format" */
	{
		if (format[i] == '%') /* checks for percent symbol */
		{
			for (j = 0; array[j].letra != NULL; j++) /* iterate through character/function array */
			{
				if (format[i + 1] == *array[j].letra) /* checks character next to percent symbol */
				{
					array[j].f(args); /* calls function depending on character found */
					i++; /* iterate to avoid printing character that follows percent symbol */
				}
			}
		}
		else
		_putchar(format[i]); /* printing current character */
	}

	va_end(args);
	return (0);
}
