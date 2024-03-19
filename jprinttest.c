#include "main.h"
/**
 * _printf - prints to stdout given information
 * @format: string with arg references
 * Return: int amount of characters (Success)
 */
int _printf(const char *format, ...)
{
	typeofprint array[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL},
	};
	int i, j;
	int ttl = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; array[j].letra != NULL; j++)
			{
				if (format[i + 1] == *array[j].letra)
				{
					ttl = array[j].f(args);
					i++;
					break;
				}
				else if (format[i + 1] == '%')
				{
					_putchar('%');
					i++;
					break;
				}
			}
			if (array[j].letra == NULL)
				_putchar('%');
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (ttl + i);
}
