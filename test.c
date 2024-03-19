#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
int print_c(va_list *args)
{
	return (_putchar(va_arg(*args, int)));
}
int print_s(va_list *args)
{
	size_t x;
	char *ptr = va_arg(*args, char *);

	x = strlen(ptr);
	return (write(1, ptr, x));
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
					break;
				}
				else if (format[i + 1] == '%') /* prints single % when %% is found */
				{
					_putchar('%');
					i++;
					break;
				}
			}
			if (array[j].letra == NULL) /* prints % when unkown format spec */
				_putchar('%');
		}
		else
		_putchar(format[i]); /* printing current character */
	}

	va_end(args);
	return (0);
}
